/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:35:29 by macote            #+#    #+#             */
/*   Updated: 2023/10/20 13:30:50 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

Ice::Ice():AMateria("ice")
{
}

Ice::Ice(const Ice &instance)
{
	*this = instance;
}

Ice& Ice::operator=(const Ice &copie)
{
	(void)copie;
	return *this;
}

Ice::~Ice()
{
}

void Ice::use(ICharacter& target)
{
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}
