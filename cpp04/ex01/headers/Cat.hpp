/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:34:05 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 13:21:30 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain *_brain;

public:
	Cat();
	Cat(const Cat &instance);
	Cat		&operator=(const Cat& copie);
	virtual ~Cat();
	
	virtual void makeSound() const;
	const Brain *getBrain() const;
};


#endif // __CAT_H__