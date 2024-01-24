/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:20:22 by macote            #+#    #+#             */
/*   Updated: 2023/10/10 11:08:01 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		string _name;

	public:
		//CONSTRUCTEUR
		DiamondTrap();
		DiamondTrap(string name);
		DiamondTrap(const DiamondTrap &instance);

		//SURCHARGE D'OPÉRATEUR
		DiamondTrap		&operator=(const DiamondTrap& copie);
		
		//DESTRUCTEUR
		~DiamondTrap();

		//FONCTIONS MEMBRES
		void whoAmI();
		
		// using FragTrap::attack; //using pour choisir l'overload du parent
		// using ClapTrap::attack;
		using ScavTrap::attack;
};

#endif // __DIAMONDTRAP_H__