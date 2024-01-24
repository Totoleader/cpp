/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:30:17 by macote            #+#    #+#             */
/*   Updated: 2024/01/07 15:04:49 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

void RPN::solveExpression(string input)
{
	std::stringstream	sstream(input);
	std::string			token;

	while (sstream >> token)
	{
		if (token.find_first_not_of("1234567890") == std::string::npos)
			push(std::stoi(token));

		else if (size() < 2)
			throw(InputErrorException());

		else if (token == "+")
			pushResult(&RPN::add);
		else if (token == "-")
			pushResult(&RPN::sub);
		else if (token == "/")
			pushResult(&RPN::div);
		else if (token == "*")
			pushResult(&RPN::mul);

		else
			throw(InputErrorException());
	}

	if (size() != 1)
		throw(InputErrorException());
	else
		std::cout << "Result: " << top() << std::endl;
}

void RPN::pushResult(int (RPN::*fcn)(int, int))
{
	int a;
	int b;

	a = top();
	pop();
	b = top();
	pop();
	push( (this->*fcn)(a, b) );
}

int RPN::add(int a, int b) {
    return a + b;
}

int RPN::sub(int a, int b) {
    return b - a;
}

int RPN::mul(int a, int b) {
    return a * b;
}

int RPN::div(int a, int b) {
    return b / a;
}
