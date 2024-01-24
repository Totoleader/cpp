/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:05:46 by macote            #+#    #+#             */
/*   Updated: 2023/10/02 11:45:59 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

//constructor
Zombie::Zombie(std::string name) : name_(name)
{
}

void Zombie::set_name(std::string name)
{
	name_ = name;
}

//constructor
Zombie::Zombie(void)
{
}

//destructor
Zombie::~Zombie()
{
	std::cout << "Destroyed " << name_ << "." << std::endl;
}


void Zombie::announce(void)
{
	if (name_ == "Foo")
	{
		std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}
	else
	{
		std::cout << '<' << name_ << '>' << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}
}
