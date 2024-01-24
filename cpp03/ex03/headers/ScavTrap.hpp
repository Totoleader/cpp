/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:39:49 by macote            #+#    #+#             */
/*   Updated: 2023/10/10 11:13:49 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:
	
	public:
		//CONSTRUCTEUR
		ScavTrap();
		ScavTrap(string name);
		ScavTrap(const ScavTrap &instance);

		//SURCHARGE D'OPÉRATEUR
		ScavTrap		&operator=(const ScavTrap& copie);
		
		//DESTRUCTEUR
		~ScavTrap();

		//FONCTIONS MEMBRES
		void guardGate();
		void attack(const std::string& target);
};

#endif // __SCAVTRAP_H__