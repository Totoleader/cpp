/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:11:51 by macote            #+#    #+#             */
/*   Updated: 2023/10/20 13:24:53 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_H__
#define __ICE_H__

#include "ex03.hpp"

class Ice: public AMateria
{
private:
	
public:
	Ice();
	Ice(const Ice &instance);
	Ice		&operator=(const Ice& copie);
	virtual ~Ice();
	void use(ICharacter& target);
	AMateria* clone() const;
};

#endif // __ICE_H__
