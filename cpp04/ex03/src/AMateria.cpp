/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:35:00 by macote            #+#    #+#             */
/*   Updated: 2023/10/20 13:34:10 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

AMateria::AMateria():_type("")
{
}

AMateria::AMateria(std::string const & type):_type(type)
{
}

AMateria::AMateria(const AMateria &instance)
{
	*this = instance;
}

AMateria& AMateria::operator=(const AMateria &copie)
{
	_type = copie.getType();
	return *this;
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return(_type);
}

void AMateria::use(ICharacter& target)
{
	cout << "Object used on " << target.getName() << endl;
}
