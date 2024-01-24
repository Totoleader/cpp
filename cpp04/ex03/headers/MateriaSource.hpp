/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 08:39:08 by macote            #+#    #+#             */
/*   Updated: 2023/10/20 13:25:11 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__

#include "ex03.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *_inventaire[4];
		
	public:
		MateriaSource(/* args */);
		MateriaSource(const MateriaSource &instance);
		MateriaSource		&operator=(const MateriaSource& copie);
		~MateriaSource();
	
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

#endif // __MATERIASOURCE_H__