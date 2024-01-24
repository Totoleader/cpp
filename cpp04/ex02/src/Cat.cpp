/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:35:20 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 13:23:09 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): AAnimal("Cat"), _brain(new Brain())
{
}

Cat::Cat(const Cat &instance): _brain(new Brain())
{
	*this = instance;
}

Cat& Cat::operator=(const Cat &copie)
{
	_type = copie.getType();	
	*_brain = *(copie.getBrain());

	return *this;
}

Cat::~Cat()
{
	cout << "Delete brain." << endl;
	delete _brain;
}

void Cat::makeSound() const
{
	cout << "*Miaou*" << endl;
}

const Brain* Cat::getBrain() const
{
	return _brain;
}