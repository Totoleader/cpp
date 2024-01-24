/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:27:04 by macote            #+#    #+#             */
/*   Updated: 2023/10/10 11:03:50 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap::ClapTrap()
{
	cout << "Default DiamondTrap constructor called." << endl;
}

DiamondTrap::DiamondTrap(string name): ClapTrap::ClapTrap(name, 100, 50, 30),
// ScavTrap(name), FragTrap(name),
_name(ClapTrap::_name + "_clap_name")
{
	cout << "DiamondTrap constructor called for " << _name << "." << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &instance)
{
	cout << "Copy DiamondTrap constructor called" << endl;
	*this = instance;
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap " << _name << " destructor called." << endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copie)
{
	cout << "DiamondTrap copy assignment operator called" << endl;
	ClapTrap::operator=(copie);

	return *this;
}

void DiamondTrap::whoAmI()
{
	cout << "Nom DiamondTrap: " << _name << " Nom de sous-objet ClapTrap: " << ClapTrap::_name << endl;
}
