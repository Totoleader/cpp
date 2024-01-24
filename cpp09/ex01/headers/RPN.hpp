/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:30:51 by macote            #+#    #+#             */
/*   Updated: 2024/01/07 14:50:57 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RPN_H__
#define __RPN_H__

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <stack>
#include <deque>
#include <strstream>
#include <sstream>

using std::string;
using std::stack;
using std::deque;
using std::cout;
using std::endl;


class RPN : public stack<int, deque<int> >
{
	private:
		void pushResult(int (RPN::*fcn)(int, int));
		int add(int a, int b);
		int sub(int a, int b);
		int mul(int a, int b);
		int div(int a, int b);

	public:
		RPN();
		~RPN();

		void solveExpression(string);

	class InputErrorException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error.");
				}
		};
};

#endif // __RPN_H__