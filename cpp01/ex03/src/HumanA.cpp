/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:13:29 by macote            #+#    #+#             */
/*   Updated: 2023/10/02 15:40:28 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name_(name), weapon_(&weapon)
{
}

HumanA::~HumanA()
{
	std::cout << name_ << " \033[31mdestroyed.\033[0m" << std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
	weapon_ = &weapon;
}

void HumanA::attack(void)
{
	std::cout << name_ << " attacks with their " << weapon_->getType() << "." << std::endl;
}
