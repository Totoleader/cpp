/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:43:03 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 13:32:24 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Dog dog;
	Cat cat;
	// AAnimal animal;//!!!!!NOT VALID!!!!!

	AAnimal* j = new Dog();
	AAnimal* i = new Cat();
	
	dog.makeSound();
	cat.makeSound();
	j->makeSound();
	i->makeSound();

	delete j;//should not create a leak
	delete i;

	return (0);
}
