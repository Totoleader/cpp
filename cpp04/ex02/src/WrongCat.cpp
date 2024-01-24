/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:07:31 by macote            #+#    #+#             */
/*   Updated: 2023/10/20 13:21:33 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
}

WrongCat::WrongCat(const WrongCat &instance)
{
	*this = instance;
}

WrongCat& WrongCat::operator=(const WrongCat &copie)
{
	(void)copie;
	return *this;
}

WrongCat::~WrongCat()
{
}

void WrongCat::makeSound() const
{
	cout << "*Miaou*" << endl;
}