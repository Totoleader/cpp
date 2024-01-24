/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:12:12 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 12:35:05 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(/* args */)
{
	cout << "Brain constructor called." << endl;
}

Brain::Brain(const Brain &instance)
{
	cout << "Brain copy constructor called." << endl;
	*this = instance;
}

Brain& Brain::operator=(const Brain &copie)
{
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = copie._ideas[i];
	
	return *this;
}

Brain::~Brain()
{
	cout << "Brain destructor called." << endl;
}