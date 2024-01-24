/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:29:58 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 11:21:48 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	cout << "Animal constructor called." << endl;
}

Animal::Animal(string type): _type(type)
{
	cout << "Animal constructor called." << endl;
}

Animal::Animal(const Animal &instance)
{
	cout << "Animal copy constructor called." << endl;
	*this = instance;
}

Animal& Animal::operator=(const Animal &copie)
{
	(void)copie;
	return *this;
}

Animal::~Animal()
{
	cout << "Animal destructor called." << endl;
}

void Animal::makeSound() const
{
	cout << "*Some animal sound*" << endl;
}

const string Animal::getType() const
{
	return (_type);
}
