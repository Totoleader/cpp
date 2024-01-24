/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:04:08 by macote            #+#    #+#             */
/*   Updated: 2023/10/10 10:45:28 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
	
	public:
		//CONSTRUCTEUR
		FragTrap();
		FragTrap(string name);
		FragTrap(const FragTrap &instance);

		//SURCHARGE D'OPÉRATEUR
		FragTrap		&operator=(const FragTrap& copie);
		
		//DESTRUCTEUR
		~FragTrap();

		//FONCTIONS MEMBRES
		void highFiveGuys();
		
};

#endif // __FRAGTRAP_H__