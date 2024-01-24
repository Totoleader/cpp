/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:43:03 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 13:28:49 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	/////////////////////////////////////////

	//BASIC TEST
	Animal animal;
	Cat cat;
	Dog dog;
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;//should not create a leak
	delete i;
	
	////////////////////////////////////////

	//ARRAY TEST
	Animal **animal_array = new Animal*[100];

	for (size_t i = 0; i < 50; i++)
		animal_array[i] = new Cat();

	for (size_t i = 50; i < 100; i++)
		animal_array[i] = new Dog();

	for (size_t i = 0; i < 100; i++)
		delete animal_array[i];


	delete[] animal_array;
	
	////////////////////////////////////////
	
	//DEEP COPY TESTS
	Cat cat1;
	cout << "Brain Adress: " << cat1.getBrain() << endl << endl;
	Cat cat2(cat1);
	cout << "Brain Adress: " << cat2.getBrain() << endl << endl;

	Dog dog1;
	cout << "Brain Adress: " << dog1.getBrain() << endl << endl;
	Dog dog2(dog1);
	cout << "Brain Adress: " << dog2.getBrain() << endl << endl;

	Cat *cat3 = new Cat();
	cout << "Brain Adress: " << cat3->getBrain() << endl << endl;
	Cat *cat4 = new Cat(*cat3);
	cout << "Brain Adress: " << cat4->getBrain() << endl << endl;
	delete cat3;
	delete cat4;
	
	////////////////////////////////////////
	
	return (0);
}
