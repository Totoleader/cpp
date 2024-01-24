/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:35:38 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 13:23:59 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): AAnimal("Dog"), _brain(new Brain())
{
}

Dog::Dog(const Dog &instance): _brain(new Brain())
{
	*this = instance;
}

Dog& Dog::operator=(const Dog &copie)
{
	_type = copie.getType();	
	*_brain = *(copie.getBrain());

	return *this;
}

Dog::~Dog()
{
	cout << "Delete brain." << endl;
	delete _brain;
}

void Dog::makeSound() const
{
	cout << "*Wouf*" << endl;
}

const Brain* Dog::getBrain() const
{
	return _brain;
}
