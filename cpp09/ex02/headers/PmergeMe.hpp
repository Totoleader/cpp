/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:07:25 by macote            #+#    #+#             */
/*   Updated: 2024/01/23 15:22:58 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME_H__
#define __PMERGEME_H__

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <deque>
#include <strstream>
#include <sstream>
#include <ctime>

#define ERROR 1
#define SUCCESS 0

class PmergeMe
{
	private:
		std::vector< std::pair<int, int> >	_pairVector;
		std::deque< std::pair<int, int> >	_pairDeque;
		std::vector<int> _mainChain;
		std::deque<int> _mainChain_deq;
		bool	_straggler_vec;
		bool	_straggler_deq;
		int		_stragVal_vec;
		int		_stragVal_deq;

	public:
		PmergeMe();
		~PmergeMe();

		
		// vector
		void parse_vec(char **argv);
		void mergeSort_vec(std::vector< std::pair<int, int> > &original, int size);
		void merge_vec(std::vector< std::pair<int, int> > &original, 
			std::vector< std::pair<int, int> > &left,
			std::vector< std::pair<int, int> > &right,
			int left_size, int right_size);
		void fillMainChain_vec();
		void insert_vec();
		int jacobstall_vec();
		clock_t execute_vec(char **argv);
		int binarySearch_vec(int item, int low, int high);

		// Deque
		void parse_deq(char **argv);
		void mergeSort_deq(std::deque< std::pair<int, int> > &original, int size);
		void merge_deq(std::deque< std::pair<int, int> > &original, 
			std::deque< std::pair<int, int> > &left,
			std::deque< std::pair<int, int> > &right,
			int left_size, int right_size);
		void fillMainChain_deq();
		void insert_deq();
		void print_deq();
		int	 jacobstall_deq();
		clock_t execute_deq(char **argv);
		int binarySearch_deq(int item, int low, int high);

};


#endif // __PMERGEME_H__