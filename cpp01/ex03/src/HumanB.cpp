/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:13:38 by macote            #+#    #+#             */
/*   Updated: 2023/10/02 15:02:12 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/HumanB.hpp"

HumanB::HumanB(std::string name) : name_(name), weapon_(NULL)
{
}

HumanB::~HumanB()
{
	std::cout << name_ << " \033[31mdestroyed.\033[0m" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	weapon_ = &weapon;
}

void HumanB::attack(void)
{
	if (weapon_)
		std::cout << name_ << " attacks with their " << weapon_->getType() << "." << std::endl;
	else
		std::cout << name_ << " attacks." << std::endl;
}
