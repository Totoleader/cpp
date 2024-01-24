/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:36:18 by macote            #+#    #+#             */
/*   Updated: 2023/10/06 12:00:54 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"

//constructuer par défaut
Fixed::Fixed(void):_nbRaw(0)
{
	cout << "Default constructor called" << endl;
}

//constructeur de copie
Fixed::Fixed(const Fixed &instance)
{
	cout << "Copy constructor called" << endl;
	*this = instance;
}

//destructeur
Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

Fixed& Fixed::operator=(const Fixed &copie)
{
	cout << "Copy assignment operator called" << endl;
	_nbRaw = copie.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called" << endl;
	return (this->_nbRaw);
}

void Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called" << endl;
	_nbRaw = raw;
}
