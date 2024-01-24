/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:58:37 by macote            #+#    #+#             */
/*   Updated: 2023/12/08 15:08:51 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data():_value(42)
{
}

Data::~Data()
{
}

Data::Data(const Data &instance)
{
	*this = instance;	
}

Data& Data::operator=(const Data& copie)
{
	this->_value = copie._value;

	return *this;
}

unsigned int Data::get_value() const
{
	return (_value);
}
