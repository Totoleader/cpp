/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:29:20 by macote            #+#    #+#             */
/*   Updated: 2024/01/07 14:53:19 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	
	try
	{
		RPN expression;
		string input;
		
		input = argv[1];
		expression.solveExpression(input);
	}
	catch(const RPN::InputErrorException& e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}
	return (0);
}
