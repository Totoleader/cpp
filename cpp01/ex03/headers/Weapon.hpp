/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:14:12 by macote            #+#    #+#             */
/*   Updated: 2023/10/02 15:05:21 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>
#include <string>
#include <cstdlib>

class Weapon
{
private:
	std::string type_;
	
public:
	Weapon(std::string type);
	~Weapon();
	
	std::string getType(void);
	void setType(std::string type);
};

#endif // __WEAPON_H__