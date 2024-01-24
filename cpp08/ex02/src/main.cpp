/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:05:06 by macote            #+#    #+#             */
/*   Updated: 2023/12/12 14:40:19 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

int main()
{
	MutantStack<int> mstack;
	MutantStack<int> mstack2;
	mstack2.push(99);
	mstack = mstack2;

	std::cout << std::endl;
	std::cout << "Pushing 5." << std::endl;
	mstack.push(5);
	std::cout << "Pushing 17." << std::endl;
	mstack.push(17);
	std::cout << std::endl;
	
	
	std::cout << "Top of the stack: " << mstack.top() << std::endl << std::endl;
	
	std::cout << "size before pop: " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "pop!" << std::endl;
	std::cout << "size after pop: " << mstack.size() << std::endl;
	
	
	std::cout << std::endl;
	std::cout << "Pushing 3." << std::endl;
	mstack.push(3);
	std::cout << "Pushing 5." << std::endl;
	mstack.push(5);
	std::cout << "Pushing 737." << std::endl;
	mstack.push(737);
	//[...]
	std::cout << "Pushing 0." << std::endl;
	mstack.push(0);

	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << std::endl << "Iterating threw list: ..." << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
