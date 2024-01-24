/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:12:15 by macote            #+#    #+#             */
/*   Updated: 2023/10/20 13:24:45 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_H__
#define __CURE_H__

#include "ex03.hpp"

class Cure: public AMateria
{
	private:
		/* data */
	public:
		Cure(/* args */);
		Cure(const Cure &instance);
		Cure		&operator=(const Cure& copie);
		virtual ~Cure();
		void use(ICharacter& target);
		AMateria* clone() const;
};

#endif // __CURE_H__
