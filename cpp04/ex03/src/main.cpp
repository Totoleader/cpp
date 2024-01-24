/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:07:34 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 14:57:19 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

int main()
{
	cout << endl << "*** BASIC TEST***" << endl;
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	
	// error tests
	cout << endl << "*** ERROR TEST***" << endl;
	cout << endl;
	
	IMateriaSource* src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	ICharacter* you = new Character("you");
	you->equip(src2->createMateria("ice"));
	you->use(0, *me);
	
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	tmp = src->createMateria("potato");

	me->use(2, *bob);
	me->use(3, *bob);
	me->use(3, *bob);

	me->use(1, *bob);
	me->unequip(1);
	me->unequip(1);
	me->use(1, *bob);
	me->unequip(1);
	me->unequip(100);
	me->use(100, *bob);
	
	me->use(1, *bob);


	//deep copy////////////
	cout << endl << "*** DEEP COPY TEST***" << endl;
	Character one("Mike");
	Character two(one);

	// Character* me2 = new Character("me");
	ICharacter* you2 = new Character(*dynamic_cast<Character*>(me));
	// ICharacter* you2 = new Character(*me2);
	you2->use(0, *bob);
	me->use(0, *bob);
	you2->use(1, *bob);
	me->use(1, *bob);
	you2->use(2, *bob);
	me->use(2, *bob);
	
	// delete me2;
	delete you2;
	///////////////////////


	
	delete bob;
	delete me;
	delete src;

	delete you;
	delete src2;
	return 0;
}