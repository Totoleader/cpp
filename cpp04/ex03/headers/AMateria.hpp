/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:08:35 by macote            #+#    #+#             */
/*   Updated: 2023/10/20 13:34:20 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include "ex03.hpp"

class ICharacter;

class AMateria
{
	protected:
		string _type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &instance);
		AMateria		&operator=(const AMateria& copie);
		virtual ~AMateria();
		// [...]
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif // __AMATERIA_H__
