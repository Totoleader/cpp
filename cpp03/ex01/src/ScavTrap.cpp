/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:41:32 by macote            #+#    #+#             */
/*   Updated: 2023/10/10 10:46:47 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap::ClapTrap()
{
	cout << "Default ScavTrap constructor called." << endl;
}

ScavTrap::ScavTrap(string name): ClapTrap::ClapTrap(name, 100, 50, 20)
{
	cout << "ScavTrap constructor called for " << _name << "." << endl;
}

ScavTrap::ScavTrap(const ScavTrap &instance)
{
	cout << "ScavTrap copy constructor called" << endl;
	*this = instance;
}


ScavTrap::~ScavTrap()
{
	cout << "ScavTrap " << _name << " destructor called." << endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copie)
{
	cout << "ScavTrap copy assignment operator called" << endl;
	ClapTrap::operator=(copie);

	return *this;
}

void ScavTrap::guardGate()
{
	cout << "ScavTrap est entré en mode Gate keeper." << endl;
}

void ScavTrap::attack(const std::string& target)
{
	cout << "Called from scavTrap: ";
	ClapTrap::attack(target);
}