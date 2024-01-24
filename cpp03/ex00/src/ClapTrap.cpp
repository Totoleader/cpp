/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:00:03 by macote            #+#    #+#             */
/*   Updated: 2023/10/09 15:52:58 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"

//constructeur par défaut
ClapTrap::ClapTrap():_name("<Unnamed>"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	cout << "Default ClapTrap constructor called." << endl;
}

//constructeur surchargé
ClapTrap::ClapTrap(string name, int hitPoints, int energyPoints, int attackDamage)
: _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
	cout << "Constructor called for " << _name << "." << endl;

}

//constructeur de copie
ClapTrap::ClapTrap(const ClapTrap &instance)
{
	cout << "Copy constructor called" << endl;
	*this = instance;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copie)
{
	cout << "Copy assignment operator called" << endl;
	_name = copie._name;
	_hitPoints = copie._hitPoints;
	_energyPoints = copie._energyPoints;
	_attackDamage = copie._attackDamage;

	return *this;
}

//destructeur
ClapTrap::~ClapTrap()
{
	cout << _name << " destroyed." << endl;
}



//FONCTIONS MEMBRES:
void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
	{
		cout << "Enough with all this violence! " << _name << "'s corpse cannot attack anyway..." << endl;
		return ;
	}
	
	cout << _name << " attacks " << target;
	cout << ", causing " << _attackDamage << " points of damage!" << endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{	
	if (_hitPoints <= 0)
	{
		cout << "Attacking a dead ClapTrap... That's mean.." << endl;
		return ;
	}

	{
		_hitPoints -= amount;
		cout << _name << " took " << amount << " damage";
		if (_hitPoints <= 0)
		{
			cout << " and sadly passed away from " << _hitPoints + amount << " hit points...";
			_hitPoints = 0;
		}
		cout << "." << endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		cout << "It's sadly too late for " << _name << " to be repaired :'(" << endl;
		return ;
	}
	
	_hitPoints += amount;
	cout << _name << " gained " << amount << " hit points and now has " << _hitPoints << " hit points!!! woow :D" << endl;
}



// //ACCESSEURS
// const string ClapTrap::get_name() const
// {
// 	return (_name);
// }

// const int ClapTrap::get_hitPoints() const
// {
// 	return (_hitPoints);
// }

// const int ClapTrap::get_energyPoints() const
// {
// 	return (_energyPoints);
// }

// const int ClapTrap::get_attackDamage() const
// {
// 	return (_attackDamage);
// }

// void ClapTrap::set_name(string name)
// {
// 	_name = name;
// }

// void ClapTrap::set_hitPoints(int hitPoints)
// {
// 	_hitPoints = hitPoints;
// }

// void ClapTrap::set_energyPoints(int energyPoints)
// {
// 	_energyPoints = energyPoints;
// }

// void ClapTrap::set_attackDamage(int attackDamage)
// {
// 	_attackDamage = attackDamage;
// }
