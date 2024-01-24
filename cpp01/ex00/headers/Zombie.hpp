/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:32:10 by macote            #+#    #+#             */
/*   Updated: 2023/10/02 11:03:22 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
private:
	std::string name_;

public:
	void announce(void);
	
	static Zombie* newZombie(std::string name);
	static void randomChump(std::string name);

	Zombie(void);
	Zombie(std::string name);
	~Zombie();
};

#endif