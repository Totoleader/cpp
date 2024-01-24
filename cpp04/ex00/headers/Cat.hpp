/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:34:05 by macote            #+#    #+#             */
/*   Updated: 2023/10/20 13:13:20 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class Cat: public Animal
{
private:
	
public:
	Cat();
	Cat(const Cat &instance);
	Cat		&operator=(const Cat& copie);
	~Cat();

	virtual void makeSound() const;
};

#endif // __CAT_H__