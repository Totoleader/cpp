/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:15:04 by macote            #+#    #+#             */
/*   Updated: 2023/12/12 11:51:49 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{	
		std::cout << std::endl;
		unsigned int n = 3;

		Array<std::string> string_array(n);
		Array<int> int_array(n);
		Array<int> int_array2(n);
		Array<float> float_array(n);
		Array<double> double_array(n);

		string_array[0] = "string index 0";
		string_array[1] = "string index 1";
		string_array[2] = "string index 2";
		string_array[3] = "should not work";//should throw exception
		string_array[-1] = "should not work";//should throw exception
		

		int_array[0] = 666;
		int_array[1] = 777;
		int_array[2] = 888;

		float_array[0] = 1.9;
		float_array[1] = 1.99;
		float_array[2] = 1.999;

		double_array[0] = 1111111;
		double_array[1] = 2222222;
		double_array[2] = 3333333;

		int_array2 = int_array;
		int_array2[0] = 0;
		std::cout << "Testing deep copy (int_array[0] should stay unchanged at 666): " << int_array[0] << std::endl;
		
		for (size_t i = 0; i < n; i++)
			std::cout << string_array[i] << std::endl;
		std::cout << std::endl;

		for (size_t i = 0; i < n; i++)
			std::cout << int_array[i] << std::endl;
		std::cout << std::endl;

		for (size_t i = 0; i < n; i++)
			std::cout << int_array2[i] << std::endl;
		std::cout << std::endl;

		for (size_t i = 0; i < n; i++)
			std::cout << float_array[i] << std::endl;
		std::cout << std::endl;
		
		for (size_t i = 0; i < n; i++)
			std::cout << double_array[i] << std::endl;
		std::cout << std::endl;	


		///////TEST WITH DEFAULT CONSTRUCTOR////////////
		std::cout << std::endl << "-Default constructor test-" << std::endl << std::endl;
		int * a = new int();
		std::cout << "test with int(): " << a[0] << std::endl;
		a[0] = 1;
		std::cout << "test with int(): " << a[0] << std::endl;

		Array<int> no_array;
		std::cout << "test with default constructor: " << no_array[0] << std::endl;
		no_array[0] = 1;
		std::cout << "test with default constructor: " << no_array[0] << std::endl;
	
	return (0);
}
