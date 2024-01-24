/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:36:18 by macote            #+#    #+#             */
/*   Updated: 2023/10/13 12:16:49 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"

//constructuer par défaut
Fixed::Fixed(void):_nbRaw(0)
{
	cout << "Default constructor called" << endl;
}

//constructeur surchargé
Fixed::Fixed(const int nb):_nbRaw(nb << _nbFrac)
{
}

Fixed::Fixed(const float nb):_nbRaw(roundf(nb * (1 << _nbFrac)))
{
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

float Fixed::toFloat(void) const
{
    return ((float)_nbRaw / (float)(1 << _nbFrac));
}

int Fixed::toInt(void) const
{
    return (_nbRaw >> _nbFrac);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
