/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:07:06 by macote            #+#    #+#             */
/*   Updated: 2023/10/20 13:12:52 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:
	/* data */
public:
	WrongCat(/* args */);
	WrongCat(const WrongCat &instance);
	WrongCat		&operator=(const WrongCat& copie);
	~WrongCat();

	void makeSound() const;
};

#endif // __WRONGCAT_H__