/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:38:15 by macote            #+#    #+#             */
/*   Updated: 2023/10/13 16:51:59 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Point.hpp"

Point::Point()
{
}

Point::Point(Fixed x, Fixed y):_x(x), _y(y)
{
}

Point::~Point()
{
}

const Fixed Point::getX(void) const
{
	return (_x);
}

const Fixed Point::getY(void) const
{
	return (_y);
}
