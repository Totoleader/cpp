/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:06:58 by macote            #+#    #+#             */
/*   Updated: 2023/10/02 11:55:37 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

int main(void)
{
	size_t horde_size = 12;
	Zombie *horde = Zombie::zombieHorde(horde_size, "greg");

	for (size_t i = 0; i < horde_size; i++)
	{
		horde[i].announce();
	}
	delete[] horde;

	return (EXIT_SUCCESS);
}
