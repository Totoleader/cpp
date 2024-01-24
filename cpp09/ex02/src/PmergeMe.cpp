/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:58:02 by macote            #+#    #+#             */
/*   Updated: 2024/01/23 14:59:31 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::merge_vec(std::vector< std::pair<int, int> > &original, 
std::vector< std::pair<int, int> > &left,
std::vector< std::pair<int, int> > &right,
int left_size, int right_size)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < left_size && j < right_size)
	{
		if (left[i] < right[j])
			original[k++] = left[i++];
		else
			original[k++] = right[j++];
	}

	while (i < left_size)
		original[k++] = left[i++];
	while (j < right_size)
		original[k++] = right[j++];	
}

void PmergeMe::mergeSort_vec(std::vector< std::pair<int, int> > &original, int size)
{
	int i = 0; 
	std::vector< std::pair<int, int> > left;
	std::vector< std::pair<int, int> > right;
	int left_size;
	int right_size;
	
	if (size < 2)
		return ;

	left_size = size / 2;
	right_size = size - left_size;

	for (int j = 0; j < left_size; j++)
		left.push_back(original[i++]);
	for (int j = 0; j < right_size; j++)
		right.push_back(original[i++]);
	
	mergeSort_vec(left, left_size);
	mergeSort_vec(right, right_size);
	
	merge_vec(original, left, right, left_size, right_size);
}

void PmergeMe::fillMainChain_vec()
{
	std::vector< std::pair<int, int> >::iterator it = _pairVector.begin();
	for (; it != _pairVector.end() ; it++)
		_mainChain.push_back(it->first);

	if (_straggler_vec)
	{
		std::pair<int, int> newPair;
		newPair.second = _stragVal_vec;
		_pairVector.push_back(newPair);
	}
}

int PmergeMe::jacobstall_vec()
{
	static int second_last = 0;
	static int last = 1;
	static int value = 1;
	
	if (value > second_last + 1 && value != 1)
		value--;
	else
	{
		value = last + (2 * second_last);	
		second_last = last;
		last = value;
	}
	
	if (value > static_cast<int>(_pairVector.size()))
		value = jacobstall_vec();
	
 	return value;
}

int PmergeMe::binarySearch_vec(int item, int low, int high)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (item == _mainChain[mid])
            return mid + 1;
        else if (item > _mainChain[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
 
    return low;
}

void PmergeMe::insert_vec()
{
	int index;
	int size = _pairVector.size();
	for (int i = 0; i < size ; i++)
	{
		int mc_size = _mainChain.size() - 1;
		index = jacobstall_vec();
		_mainChain.insert((_mainChain.begin() + binarySearch_vec(_pairVector[index - 1].second, 0, mc_size)), _pairVector[index - 1].second);
	}
}

// void PmergeMe::print_vec()
// {
// 	for (std::vector<int>::iterator it = _mainChain.begin() ; it != _mainChain.end() ; it++)
// 	{
// 		std::cout << *it << " ";
// 	}
// 	std::cout << std::endl << std::endl;
// }

void PmergeMe::parse_vec(char **argv)
{
	int nb;
	std::string in;
	int i = 1;
	
	std::cout << std::endl << "Before: ";
	std::pair <int, int> newPair;
	while (argv[i])
	{
		std::stringstream stream(argv[i]);
		in = argv[i];
		if (!(stream >> nb) || nb < 0 || in.find_first_not_of("1234567890") != std::string::npos)
			throw std::exception();
		std::cout << nb << " ";
		
		if (!(i % 2))
		{
			newPair.second = nb;
			if (newPair.first < newPair.second)
				std::swap(newPair.first, newPair.second);

			_pairVector.push_back(newPair);
		}
		else
			newPair.first = nb;
		i++;
	}
	if (!(i % 2))
	{
		_straggler_vec = true;
		_stragVal_vec = nb;
	}
	std::cout << std::endl << std::endl;
}

clock_t PmergeMe::execute_vec(char **argv)
{
	int start_time;
	int end_time;
	
	start_time = clock();
	
	parse_vec(argv);
	mergeSort_vec(_pairVector, _pairVector.size());
	fillMainChain_vec();
	insert_vec();
	// print_vec();

	end_time = clock();
	return end_time - start_time;
}



// DEQUE



void PmergeMe::merge_deq(std::deque< std::pair<int, int> > &original, 
std::deque< std::pair<int, int> > &left,
std::deque< std::pair<int, int> > &right,
int left_size, int right_size)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < left_size && j < right_size)
	{
		if (left[i] < right[j])
			original[k++] = left[i++];
		else
			original[k++] = right[j++];
	}

	while (i < left_size)
		original[k++] = left[i++];
	while (j < right_size)
		original[k++] = right[j++];	
}

void PmergeMe::mergeSort_deq(std::deque< std::pair<int, int> > &original, int size)
{
	int i = 0; 
	std::deque< std::pair<int, int> > left;
	std::deque< std::pair<int, int> > right;
	int left_size;
	int right_size;
	
	if (size < 2)
		return ;

	left_size = size / 2;
	right_size = size - left_size;

	for (int j = 0; j < left_size; j++)
		left.push_back(original[i++]);
	for (int j = 0; j < right_size; j++)
		right.push_back(original[i++]);
	
	mergeSort_deq(left, left_size);
	mergeSort_deq(right, right_size);
	
	merge_deq(original, left, right, left_size, right_size);
}

int PmergeMe::binarySearch_deq(int item, int low, int high)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (item == _mainChain_deq[mid])
            return mid + 1;
        else if (item > _mainChain_deq[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
 
    return low;
}

void PmergeMe::fillMainChain_deq()
{
	std::deque< std::pair<int, int> >::iterator it = _pairDeque.begin();
	for (; it != _pairDeque.end() ; it++)
		_mainChain_deq.push_back(it->first);

	if (_straggler_deq)
	{
		std::pair<int, int> newPair;
		newPair.second = _stragVal_deq;
		_pairDeque.push_back(newPair);
	}
	
}

int PmergeMe::jacobstall_deq()
{
	static int second_last = 0;
	static int last = 1;
	static int value = 1;
	
	if (value > second_last + 1 && value != 1)
		value--;
	else
	{
		value = last + (2 * second_last);	
		second_last = last;
		last = value;
	}
	
	if (value > static_cast<int>(_pairDeque.size()))
		value = jacobstall_deq();
	
 	return value;
}

void PmergeMe::insert_deq()
{
	int index;
	int mc_size;
	int size = _pairDeque.size();
	for (int i = 0; i < size ; i++)
	{
		index = jacobstall_deq();
		mc_size = _mainChain_deq.size() - 1;
		_mainChain_deq.insert((_mainChain_deq.begin() + binarySearch_deq(_pairDeque[index - 1].second, 0, mc_size)), _pairDeque[index - 1].second);
	}
}

void PmergeMe::print_deq()
{
	std::cout << "After: ";
	for (std::deque<int>::iterator it = _mainChain_deq.begin() ; it != _mainChain_deq.end() ; it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl << std::endl;
}

void PmergeMe::parse_deq(char **argv)
{
	int nb;
	int i = 1;

	std::pair <int, int> newPair;
	while (argv[i])
	{
		std::stringstream stream(argv[i]);

		if (!(stream >> nb) || nb < 0)
			throw std::exception();
		
		if (!(i % 2))
		{
			newPair.second = nb;
			if (newPair.first < newPair.second)
				std::swap(newPair.first, newPair.second);

			_pairDeque.push_back(newPair);
		}
		else
			newPair.first = nb;
		i++;
	}
	if (!(i % 2))
	{
		_straggler_deq = true;
		_stragVal_deq = nb;
	}
}

clock_t PmergeMe::execute_deq(char **argv)
{
	clock_t start_time;
	clock_t end_time;
	
	start_time = clock();
	
	parse_deq(argv);
	mergeSort_deq(_pairDeque, _pairDeque.size());
	fillMainChain_deq();
	insert_deq();
	print_deq();

	end_time = clock();
	return (end_time - start_time);
}
