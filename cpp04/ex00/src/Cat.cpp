/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:35:20 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 11:22:17 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	cout << "Cat constructor called." << endl;
}

Cat::Cat(const Cat &instance)
{
	cout << "Cat copy constructor called." << endl;
	*this = instance;
}

Cat& Cat::operator=(const Cat &copie)
{
	(void)copie;
	return *this;
}

Cat::~Cat()
{
	cout << "Cat destructor called." << endl;
}

void Cat::makeSound() const
{
	cout << "*Miaou*" << endl;
}
