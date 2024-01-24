/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:02:16 by macote            #+#    #+#             */
/*   Updated: 2023/10/13 16:53:48 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

// bool bsp( Point const a, Point const b, Point const c, Point const point)
// {
// 	Fixed u(((b.getY() - b.getY())*(point.getX() - c.getX()) + (c.getX() - b.getX())*(point.getY() - b.getY())) / ((b.getY() - b.getY())*(a.getX() - c.getX()) + (c.getX() - b.getX())*(a.getY() - b.getY())));
// 	Fixed v(((c.getY() - a.getY())*(point.getX() - c.getX()) + (a.getX() - c.getX())*(point.getY() - c.getY())) / ((b.getY() - c.getY())*(a.getX() - c.getX()) + (c.getX() - b.getX())*(a.getY() - c.getY())));
// 	Fixed one(1);
// 	Fixed w(one - u - w);

// 	Fixed zero;
// 	if (u >= zero && v >= zero && w >= zero)
// 	{
// 		cout << "Point is in the triangle :)" << endl;
// 		return (1);
// 	}
// 	else
// 	{
// 		cout << "Point is in the triangle :)" << endl;
// 		return (0);
// 	}
// }
