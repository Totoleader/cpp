/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:35:17 by macote            #+#    #+#             */
/*   Updated: 2023/10/20 13:30:27 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

Cure::Cure():AMateria("cure")
{
}

Cure::Cure(const Cure &instance)
{
	*this = instance;
}

Cure& Cure::operator=(const Cure &copie)
{
	(void)copie;
	return *this;
}

Cure::~Cure()
{
}

void Cure::use(ICharacter& target)
{
	cout << "* heals " << target.getName() << "'s wounds *" << endl;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}
