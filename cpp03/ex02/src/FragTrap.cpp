/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:04:26 by macote            #+#    #+#             */
/*   Updated: 2023/10/10 10:47:13 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap::ClapTrap()
{
	cout << "Default FragTrap constructor called." << endl;
}

FragTrap::FragTrap(string name): ClapTrap::ClapTrap(name, 100, 100, 30)
{
	cout << "FragTrap constructor called for " << _name << "." << endl;
}

FragTrap::FragTrap(const FragTrap &instance)
{
	cout << "FragTrap copy constructor called" << endl;
	*this = instance;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap " << _name << " destructor called." << endl;
}

FragTrap& FragTrap::operator=(const FragTrap &copie)
{
	cout << "FragTrap copy assignment operator called" << endl;
	ClapTrap::operator=(copie);

	return *this;
}

void FragTrap::highFiveGuys()
{
	cout << "FragTrap demande un high five! ò.ó" << endl;
}
