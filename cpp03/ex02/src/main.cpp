/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:00:25 by macote            #+#    #+#             */
/*   Updated: 2023/10/09 12:33:56 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"
#include "../headers/ScavTrap.hpp"
#include "../headers/FragTrap.hpp"

int main(void)
{
	// ClapTrap billy("Billy", 100, 10, 10);
	// ClapTrap billyBob("Billy Bob", 100, 10, 10);
	// ClapTrap bobbyBill("Bobby Bill", 100, 10, 10);

	// billy.attack("Leonidas");
	// billyBob.beRepaired(10);
	// bobbyBill.takeDamage(110);
	// bobbyBill.takeDamage(110);
	// bobbyBill.attack("Mr Bean");
	// bobbyBill.beRepaired(100000);
	// cout << endl;

	// ScavTrap scavyBoi("ScavyBoi");
	// scavyBoi.attack("Palpatine");
	// scavyBoi.beRepaired(10);
	// scavyBoi.takeDamage(10);
	// scavyBoi.guardGate();
	// scavyBoi.guardGate();
	// scavyBoi.guardGate();
	// cout << endl;

	// ScavTrap sicky;
	// sicky.attack("Dumbledore");
	// sicky = scavyBoi;
	// sicky.attack("Dumbledore");
	// cout << endl;

	FragTrap fragyBoi("FragyBoi");
	fragyBoi.attack("Superman");
	fragyBoi.beRepaired(10);
	fragyBoi.takeDamage(10);
	fragyBoi.highFiveGuys();
	fragyBoi.highFiveGuys();
	fragyBoi.highFiveGuys();
	cout << endl;

	FragTrap slicky;
	slicky.attack("Mohammed");
	slicky = fragyBoi;
	slicky.attack("Mohammed");
	cout << endl;
	
	return (0);
}