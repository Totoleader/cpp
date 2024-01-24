/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:12:28 by macote            #+#    #+#             */
/*   Updated: 2023/10/02 15:03:38 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Weapon.hpp"

Weapon::Weapon(std::string type): type_(type)
{
}

Weapon::~Weapon()
{
	std::cout << type_ << " \033[31mdestroyed.\033[0m" << std::endl;
}

std::string Weapon::getType(void)
{
	return(type_);
}

void Weapon::setType(std::string type)
{
	type_ = type;
}
