/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:08:10 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 11:43:06 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	cout << "WrongAnimal constructor called." << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &instance)
{
	cout << "WrongAnimal copy constructor called." << endl;
	*this = instance;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copie)
{
	(void)copie;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal destructor called." << endl;
}

void WrongAnimal::makeSound() const
{
	cout << "*Wrong cat sound*" << endl;
}

const string WrongAnimal::getType() const
{
	return (_type);
}
