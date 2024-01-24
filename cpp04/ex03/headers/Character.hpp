/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:13:58 by macote            #+#    #+#             */
/*   Updated: 2023/10/20 13:32:45 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include "ex03.hpp"

class Character: public ICharacter
{
	private:
		string _name;
		AMateria *_inventaire[4];
		AMateria *_trash[20];
	
	public:
		Character(/* args */);
		Character(string name);
		Character(const Character &instance);
		Character		&operator=(const Character& copie);
		~Character();
	
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};



#endif // __CHARACTER_H__
