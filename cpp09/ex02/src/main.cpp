/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:07:07 by macote            #+#    #+#             */
/*   Updated: 2024/01/23 15:03:53 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMe pmergeme;
	clock_t vec_time;
	clock_t deq_time;

	if (argc < 2)
	{
		std::cout << "Not enough args"<< std::endl;
		return 0;
	}
	try
	{
		vec_time = pmergeme.execute_vec(argv);
		deq_time = pmergeme.execute_deq(argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << ": Bad Input."<< '\n';
	}
	std::cout << "Time to process a range of " << argc - 1 << " elements with  std::vector : " << vec_time * 1000.0 / (double)CLOCKS_PER_SEC << "ms"<< std::endl;
	std::cout << "Time to process a range of " << argc - 1 << " elements with  std::deque  : " << deq_time * 1000.0 / (double)CLOCKS_PER_SEC << "ms"<< std::endl;
	
	return 0;
}