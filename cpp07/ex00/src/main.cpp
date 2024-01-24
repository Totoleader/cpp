/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:54:28 by macote            #+#    #+#             */
/*   Updated: 2023/11/13 14:28:26 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00.hpp"

int main()
{
	//TESTS FROM SUBJECT////////////////////////////////////////
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	////////////////////////////////////////////////////////////



	//TEST WITH INT/////////////////////////////////////////////
	int x = 1;
	int y = 2;
	std::cout << "min: " << min(x, y) << std::endl;
	std::cout << "max: " << max(x, y) << std::endl;
	
	std::cout << std::endl;
	std::cout << "x before swap: " << x << std::endl;
	std::cout << "y before swap: " << y << std::endl;
	swap(x, y);
	std::cout << "x after swap: " << x << std::endl;
	std::cout << "y after swap: " << y << std::endl;
	/////////////////////////////////////////////////////////////


	std::cout << std::endl;
	std::cout << std::endl;


	//TEST WITH FLOAT////////////////////////////////////////////
	float abc = 42.2f;
	float def = -9.9f;
	std::cout << "min: " << min(abc, def) << std::endl;
	std::cout << "max: " << max(abc, def) << std::endl;
	
	std::cout << std::endl;
	std::cout << "abc before swap: " << abc << std::endl;
	std::cout << "def before swap: " << def << std::endl;
	swap(abc, def);
	std::cout << "abc after swap: " << abc << std::endl;
	std::cout << "def after swap: " << def << std::endl;
	///////////////////////////////////////////////////////////

	return (0);
}
