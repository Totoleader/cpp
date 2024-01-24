/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:35:47 by macote            #+#    #+#             */
/*   Updated: 2023/10/20 13:31:07 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
		_inventaire[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &instance)
{
	*this = instance;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &copie)
{
	(void)copie;
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_inventaire[i])	
			delete _inventaire[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	
	int i = 0;
	while (i < 4)
	{
		if (!_inventaire[i])
		{
			_inventaire[i] = m;
			return ;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_inventaire[i] && type == _inventaire[i]->getType())
			return (_inventaire[i]->clone());
	}
	return (NULL);
}
