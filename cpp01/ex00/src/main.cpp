/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:32:00 by macote            #+#    #+#             */
/*   Updated: 2023/10/02 10:58:16 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../headers/Zombie.hpp>

int main(void)
{
	Zombie *new_zombie;
	Zombie *new_zombie2;

	new_zombie = Zombie::newZombie("Chuck");
	new_zombie->announce();
	
	new_zombie2 = Zombie::newZombie("Foo");
	new_zombie2->announce();
	
	Zombie::randomChump("billy");
	
	delete new_zombie; 
	delete new_zombie2; 
	return (EXIT_SUCCESS);
}