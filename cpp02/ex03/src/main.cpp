/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:36:37 by macote            #+#    #+#             */
/*   Updated: 2023/10/16 12:03:54 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"
#include "../headers/Point.hpp"


// int main(void)
// {
// 	Fixed a;
// 	Fixed const b( 10 );
// 	Fixed const c( 42.42f );
// 	Fixed const d( b );
	
// 	a = Fixed( 1234.4321f );
	
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;

// 	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// 	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// 	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// 	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
// 	return (0);
// }
// bool bsp( Point const a, Point const b, Point const c, Point const point)
// {
// 	Fixed u(((b.getY() - b.getY())*(point.getX() - c.getX()) + (c.getX() - b.getX())*(point.getY() - b.getY())) / ((b.getY() - b.getY())*(a.getX() - c.getX()) + (c.getX() - b.getX())*(a.getY() - b.getY())));
// 	Fixed v(((c.getY() - a.getY())*(point.getX() - c.getX()) + (a.getX() - c.getX())*(point.getY() - c.getY())) / ((b.getY() - c.getY())*(a.getX() - c.getX()) + (c.getX() - b.getX())*(a.getY() - c.getY())));
// 	Fixed one(1);
// 	Fixed w(one - u - v);

// 	Fixed zero;
// 	if (u >= zero && v >= zero && w >= zero)
// 	{
// 		cout << "Point is in the triangle :)" << endl;
// 		return (1);
// 	}
// 	else
// 	{
// 		cout << "Point is not in the triangle :(" << endl;
// 		return (0);
// 	}
// }

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed det;
    Fixed u;
    Fixed v;
    det.setRawBits(((b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY())).getRawBits());
    u.setRawBits((((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY())) / det).getRawBits());
    v.setRawBits((((c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY())) / det).getRawBits());
    Fixed one(1);
    Fixed w(one - u - v);

    Fixed zero;
    if (u >= zero && v >= zero && w >= zero) 
    {
        cout << "Point is in the triangle :)" << endl;
        return true;
    }
    else
    {
        cout << "Point is not in the triangle :(" << endl;
        return false;
    }
}

int main()
{
    // Point p1(0, 0);
    // Point p2(0, 10);
    // Point p3(10, 0);
    // Point pp4(-0.1f, 1.1f);

    // bsp(p1, p2, p3, pp4);
    
    Fixed a;
    a.setRawBits(-23040);
    Fixed b;
    b.setRawBits(-25600);
    Fixed result(a / b);
    return (0);
}



// int main()
// {
//     Fixed a(10);
//     Fixed b(20);

//     std::cout << "a(10) > b(20) = " << (a > b) << std::endl;
//     std::cout << "a(10) < b(20) = " << (a < b) << std::endl;
//     std::cout << "a(10) >= b(20) = " << (a >= b) << std::endl;
//     std::cout << "a(10) <= b(20) = " << (a <= b) << std::endl;
//     std::cout << "a(10) == b(20) = " << (a == b) << std::endl;
//     std::cout << "a(10) != b(20) = " << (a != b) << std::endl;
// }



// int main( void ) {

// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;

// 	std::cout << b << std::endl;

// 	std::cout << Fixed::max( a, b ) << std::endl;

// 	return 0;
// }
