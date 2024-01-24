/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:34:36 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 13:53:13 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

Character::Character(): _name("")
{
	for (size_t i = 0; i < 4; i++)
		_inventaire[i] = NULL;
	for (size_t i = 0; i < 20; i++)
		_trash[i] = NULL;
}

Character::Character(string name): _name(name)
{
	for (size_t i = 0; i < 4; i++)
		_inventaire[i] = NULL;
	for (size_t i = 0; i < 20; i++)
		_trash[i] = NULL;
}

Character::Character(const Character &instance)
{
	for (size_t i = 0; i < 4; i++)
		_inventaire[i] = NULL;
	for (size_t i = 0; i < 20; i++)
		_trash[i] = NULL;
	*this = instance;
}

Character& Character::operator=(const Character &instance)
{
	_name = instance.getName();
	
	//deep copie de l'inventaire
	for (size_t i = 0; i < 4; i++)
	{
		if (instance._inventaire[i])	
			_inventaire[i] = instance._inventaire[i]->clone();
	}
	return *this;
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_inventaire[i])
			delete _inventaire[i];
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (_trash[i])	
			delete _trash[i];
	}
}

std::string const & Character::getName() const
{
	return(_name);
}

void Character::equip(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (!_inventaire[i])
		{
			_inventaire[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;

	size_t i;
	for (i = 0; i < 20; i++)
	{
		if (!_trash[i])
		{
			_trash[i] = _inventaire[idx];
			break;
		}
	}
	if (i == 20)
	{
		delete _trash[0];
		_trash[0] = _inventaire[idx];
	}
	_inventaire[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	
	if (idx <= 3 && idx >= 0 && _inventaire[idx])
		_inventaire[idx]->use(target);
	else
		cout << "* No object to use *" << endl;
}
