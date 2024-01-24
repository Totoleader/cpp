/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:36:18 by macote            #+#    #+#             */
/*   Updated: 2023/10/16 12:20:50 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"

//constructuer par défaut
Fixed::Fixed(void):_nbRaw(0)
{
	// cout << "Default constructor called" << endl;
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
	// cout << "Copy constructor called" << endl;
	*this = instance;
}

//destructeur
Fixed::~Fixed()
{
	// cout << "Destructor called" << endl;
}

Fixed& Fixed::operator=(const Fixed &copie)
{
	// cout << "Copy assignment operator called" << endl;
	_nbRaw = copie.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	// cout << "getRawBits member function called" << endl;
	return (this->_nbRaw);
}

void Fixed::setRawBits(int const raw)
{
	// cout << "setRawBits member function called" << endl;
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

ostream &operator<<(ostream &output, const Fixed &fixed)
{
	output << fixed.toFloat();
	return output;
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return (_nbRaw > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (_nbRaw < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (_nbRaw >= rhs.getRawBits());	
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (_nbRaw <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (_nbRaw == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (_nbRaw != rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
	Fixed result;
	result.setRawBits(_nbRaw + rhs.getRawBits());
	return (result);
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	Fixed result;
	result.setRawBits(_nbRaw - rhs.getRawBits());
	return (result);
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	Fixed result;

	result.setRawBits((_nbRaw * rhs.getRawBits()) >> _nbFrac);
	return (result);
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	Fixed result;

	result.setRawBits((_nbRaw / rhs.getRawBits()) << _nbFrac);
	return (result);
}

Fixed& Fixed::operator--()
{
	--_nbRaw;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed incr(*this);
	--_nbRaw;
	return (incr);
}

Fixed Fixed::operator++(int)
{
	Fixed incr(*this);
	++_nbRaw;
	return (incr);
}

Fixed& Fixed::operator++()
{
	++_nbRaw;
	return (*this);
}

Fixed& Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (fixed2);
	else
		return (fixed1);
}

const Fixed& Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
	if (fixed1 >= fixed2)
		return (fixed2);
	else
		return (fixed1);
}

Fixed& Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (fixed1);
	else
		return (fixed2);
}

const Fixed& Fixed::max(Fixed const &fixed1, const Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (fixed1);
	else
		return (fixed2);
}