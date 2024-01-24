/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:43:03 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 11:26:34 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	cout << endl;
	std::cout << j->getType() << " " << std::endl;	//Dog
	std::cout << i->getType() << " " << std::endl;	//Cat
	i->makeSound(); //will output the cat sound!	//*MIAOU*
	j->makeSound();									//*WOUF*
	meta->makeSound();								//*Some animal sound*
	// ...

	cout << endl;
	const WrongAnimal* wrong_cat = new WrongCat();
	wrong_cat->makeSound();							//*Wrong Cat sound*
	cout << endl;
	
	delete meta;
	delete i;
	delete j;
	delete wrong_cat;
	return 0;
}