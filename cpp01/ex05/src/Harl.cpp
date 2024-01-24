/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:13:32 by macote            #+#    #+#             */
/*   Updated: 2023/10/04 11:16:33 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Harl.hpp"

Harl::Harl(void)
{
	message[0] = &Harl::debug;
	message[1] = &Harl::info;
	message[2] = &Harl::warning;
	message[3] = &Harl::error;
	
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
}

Harl::~Harl()
{
	
}

void Harl::debug(void)
{
	std::cout << "Debug message" << std::endl;
}

void Harl::info(void)
{
	std::cout << "Info message" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "Warning message" << std::endl;
}

void Harl::error(void)
{
	std::cout << "Error message" << std::endl;	
}

void Harl::complain(std::string level)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (level == this->levels[i])
		{
			(this->*message[i])();
			return ;
		}	
	}
}
