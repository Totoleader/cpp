/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:08:10 by macote            #+#    #+#             */
/*   Updated: 2023/10/20 13:21:13 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
}

WrongAnimal::WrongAnimal(const WrongAnimal &instance)
{
	*this = instance;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copie)
{
	(void)copie;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
}

void WrongAnimal::makeSound() const
{
	cout << "*Wrong cat sound*" << endl;
}

const string WrongAnimal::getType() const
{
	return (_type);
}
