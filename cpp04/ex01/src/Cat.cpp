/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:35:20 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 13:21:25 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), _brain(new Brain())
{
	cout << "Cat constructor called." << endl;
}

Cat::Cat(const Cat &instance): _brain(new Brain())
{
	cout << "Cat copy constructor called." << endl;
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
	cout << "Cat destructor called: Delete Brain." << endl;
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
