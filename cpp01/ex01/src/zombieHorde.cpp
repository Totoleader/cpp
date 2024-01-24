/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:06:32 by macote            #+#    #+#             */
/*   Updated: 2023/10/02 11:53:21 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie *zombie_horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		// zombie_horde[i].set_name(name);
		new (&zombie_horde[i]) Zombie(name);
	}
	return (zombie_horde);	
}
