/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:56:55 by macote            #+#    #+#             */
/*   Updated: 2023/10/02 15:38:49 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

int main(void)
{
	std::string string = "Boom pow wow!";
	std::string *stringPTR = &string;
	std::string &stringREF = *stringPTR;

	std::cout << "L'adresse de la string en mémoire: " << &string << std::endl;
	std::cout << "L'adresse stockée dans stringPTR: " << stringPTR << std::endl;
	std::cout << "L'adresse stockée dans stringREF: " << stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "La valeur de la string: " << string << std::endl;
	std::cout << "La valeur pointée par stringPTR: " << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF: " << stringREF << std::endl;
	
	return(EXIT_SUCCESS);
}
