/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:02:18 by macote            #+#    #+#             */
/*   Updated: 2023/10/02 11:44:48 by macote           ###   ########.fr       */
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
	static Zombie* zombieHorde(int N, std::string name);
	
	void announce(void);
	void set_name(std::string name);

	Zombie(void);
	Zombie(std::string name);
	~Zombie();
};

#endif // __ZOMBIE_H__