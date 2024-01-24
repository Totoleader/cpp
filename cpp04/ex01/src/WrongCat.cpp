/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:07:31 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 11:43:41 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	cout << "WrongCat constructor called." << endl;
}

WrongCat::WrongCat(const WrongCat &instance)
{
	cout << "WrongCat copy constructor called." << endl;
	*this = instance;
}

WrongCat& WrongCat::operator=(const WrongCat &copie)
{
	(void)copie;
	return *this;
}

WrongCat::~WrongCat()
{
	cout << "WrongCat destructor called." << endl;
}

void WrongCat::makeSound() const
{
	cout << "*Miaou*" << endl;
}