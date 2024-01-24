/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:59:51 by macote            #+#    #+#             */
/*   Updated: 2023/11/17 13:52:14 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{
	private:
		string	_name;
		int 	_hitPoints;
		int		_energyPoints;
		int		_attackDamage;
	
	public:
		//CONSTRUCTEUR
		ClapTrap();
		ClapTrap(string name, int hitPoints, int energyPoints, int attackDamage);
		ClapTrap(const ClapTrap &instance);
	
		//DESTURCTEUR
		~ClapTrap();
	
		//SURCHARGE D'OPÉRATEUR
		ClapTrap		&operator=(const ClapTrap& copie);
		
		//FONCTIONS MEMBRES
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
	
		// //ACCESSEURS
		// const string	get_name() const;
		// const int		get_hitPoints() const;
		// const int		get_energyPoints() const;
		// const int		get_attackDamage() const;
	
		// void 			set_name(string name);
		// void 			set_hitPoints(int hitPoints);
		// void 			set_energyPoints(int energyPoints);
		// void 			set_attackDamage(int attackDamage);
		
};

#endif // __CLAPTRAP_H__