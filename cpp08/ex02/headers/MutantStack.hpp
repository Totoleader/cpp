/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:04:57 by macote            #+#    #+#             */
/*   Updated: 2023/12/12 14:41:44 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_H__
#define __MUTANTSTACK_H__

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack: public std::stack < T, std::deque<T> >
{
private:
	
public:
	MutantStack()
	{
	}
	
	MutantStack(MutantStack const & other):std::stack<T>(other)
	{
	}
	
	MutantStack & operator=(MutantStack const & other)
	{
		this->c = other.c;
		return *this;
	}
	
	~MutantStack()
	{	
	}
	
	
	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin()
	{
		return (this->c.begin());
	}

	const iterator begin() const
	{
		return (this->c.begin());
	}

	iterator end()
	{
		return (this->c.end());
	}

	const iterator end() const
	{
		return (this->c.end());
	}
};


#endif // __MUTANTSTACK_H__