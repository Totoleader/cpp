/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:35:38 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 11:22:42 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	cout << "Dog constructor called." << endl;
}

Dog::Dog(const Dog &instance)
{
	cout << "Dog copy constructor called." << endl;
	*this = instance;
}

Dog& Dog::operator=(const Dog &copie)
{
	(void)copie;
	return *this;
}

Dog::~Dog()
{
	cout << "Dog destructor called." << endl;
}

void Dog::makeSound() const
{
	cout << "*Wouf*" << endl;
}
