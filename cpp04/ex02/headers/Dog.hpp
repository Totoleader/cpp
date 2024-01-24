/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:34:10 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 13:21:39 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
private:
	Brain *_brain;

public:
	Dog();
	Dog(const Dog &instance);
	Dog		&operator=(const Dog& copie);
	virtual ~Dog();

	virtual void makeSound() const;
	const Brain *getBrain() const;
};


#endif // __DOG_H__