/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:14:27 by macote            #+#    #+#             */
/*   Updated: 2023/10/02 14:41:45 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <iostream>
#include <string>
#include <cstdlib>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string name_;	
	Weapon *weapon_;
	
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	
	void setWeapon(Weapon &weapon);
	void attack(void);
};


#endif // __HUMANA_H__