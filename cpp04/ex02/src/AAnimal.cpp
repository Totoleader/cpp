/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:29:58 by macote            #+#    #+#             */
/*   Updated: 2023/10/20 13:20:08 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
}

AAnimal::AAnimal(string type): _type(type)
{
}

AAnimal::AAnimal(const AAnimal &instance)
{
	*this = instance;
}

AAnimal& AAnimal::operator=(const AAnimal &copie)
{
	(void)copie;
	return *this;
}

AAnimal::~AAnimal()
{
}

// void AAnimal::makeSound() const
// {
// 	cout << "*Some animal sound*" << endl;
// }

const string AAnimal::getType() const
{
	return (_type);
}

