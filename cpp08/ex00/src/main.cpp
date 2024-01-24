/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:57:59 by macote            #+#    #+#             */
/*   Updated: 2023/12/12 14:16:55 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::list<int> list_;
	list_.push_back(1);
	list_.push_back(5);
	list_.push_back(4);
	list_.push_back(2);
	
	
	std::vector<int> vector_;
	vector_.push_back(11);
	vector_.push_back(2);
	vector_.push_back(3);
	vector_.push_back(4);
	vector_.push_back(5);
	
	int nb = 2;
	if (easyfind(list_, nb) != list_.end())
		std::cout << "found " << *easyfind(list_, 2) << std::endl;
	else
		std::cout << "did not find " << nb << std::endl;

	if (easyfind(vector_, nb) != vector_.end())
		std::cout << "found " << *easyfind(vector_, 2) << std::endl;
	else
		std::cout << "did not find " << nb << std::endl;

	nb = 10;
	if (easyfind(vector_, nb) != vector_.end())
		std::cout << "found: " << *easyfind(vector_, 2) << std::endl;
	else
		std::cout << "did not find " << nb << std::endl;
		
	return (0);
}
