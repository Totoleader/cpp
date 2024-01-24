/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:34:10 by macote            #+#    #+#             */
/*   Updated: 2023/10/20 13:13:12 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"

class Dog: public Animal
{
private:
	
public:
	Dog();
	Dog(const Dog &instance);
	Dog		&operator=(const Dog& copie);
	~Dog();

	virtual void makeSound() const;
};


#endif // __DOG_H__