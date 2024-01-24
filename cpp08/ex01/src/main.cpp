/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:31:18 by macote            #+#    #+#             */
/*   Updated: 2023/12/14 13:35:26 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		std::cout << "subject test: " << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << ": error in test 1" << '\n';
	}

	////////////////////////////////////////////////

	try
	{
		std::cout << "Big span test: " << std::endl;
		Span fun(50000);
		fun.fillSpan();
		std::cout << fun.shortestSpan() << std::endl;
		std::cout << fun.longestSpan() << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << ": error in test 2" << '\n';
	}

	///////////////////////////////////////////////

	try
	{
		std::cout << "fill range test: " << std::endl;
		Span spam(5);
	
		spam.addNumber(84);
		spam.addNumber(84);
		spam.fillRange(3, 42);
		std::cout << spam.shortestSpan() << std::endl;
		std::cout << spam.longestSpan() << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << ": error in test 3" << '\n';
	}

	return (0);
}
