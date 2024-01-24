/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:49:04 by macote            #+#    #+#             */
/*   Updated: 2023/12/08 13:43:42 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <chrono>

Base * generate(void)
{
	unsigned int seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
	std::srand(static_cast<unsigned int>(seed));
	int randomNumber = (std::rand() % 3);

	if (randomNumber == 0)
		return (new A);
	else if (randomNumber == 1)
		return (new B);
	else
		return (new C);
		
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Not A, B or C..." << std::endl;
}

void identify(Base& p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Not A, B or C..." << std::endl;
}

int main()
{
	std::cout << std::endl << std::endl << "With ptr:" << std::endl;
	Base *base_ptr = nullptr;
	for (size_t i = 0; i < 10; i++)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(250));
		base_ptr = generate();
		identify(base_ptr);
		delete base_ptr;
	}

	std::cout << std::endl << std::endl << "With ref:" << std::endl;
	A a;
	identify(a);
	B b;
	identify(b);
	C c;
	identify(c);
	return (0);
}
