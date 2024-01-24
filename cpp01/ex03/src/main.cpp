/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:18:13 by macote            #+#    #+#             */
/*   Updated: 2023/10/02 15:40:00 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/HumanA.hpp"
#include "../headers/HumanB.hpp"
#include "../headers/Weapon.hpp"

int main(void)
{
	Weapon sword = Weapon("filthy sword infused with potato power juice");
	Weapon potato = Weapon("potato");
	Weapon Thunderfury = Weapon("Thunderfury, Blessed Blade of the Windseeker");

	HumanA humanA = HumanA("Gregor IV: the brave, son of Gregor III: the filthy", sword);
	HumanB humanB = HumanB("John snow");
	humanB.setWeapon(potato);

	HumanA GREG = HumanA("Hasbulla", Thunderfury);

	humanA.attack();
	humanB.attack();
	GREG.attack();
	
	return (EXIT_SUCCESS);
}