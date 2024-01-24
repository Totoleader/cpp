/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:36:37 by macote            #+#    #+#             */
/*   Updated: 2023/10/16 12:30:53 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"

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



// int main()
// {
//     Fixed a(-10);
//     Fixed b(20);
//     Fixed g(0);
//     Fixed c = a + b;
//     Fixed d = a - b;
//     Fixed e = a * b;
//     Fixed f = b / a;

//     std::cout << "a + b = " << c.toFloat() << std::endl;
//     std::cout << "a - b = " << d.toFloat() << std::endl;
//     std::cout << "a * b = " << e.toFloat() << std::endl;
//     std::cout << "a / b = " << f.toFloat() << std::endl;
// }



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



int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	return 0;
}
