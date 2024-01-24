/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:06:33 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 11:31:56 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using std::cout;
using std::string;
using std::endl;

class WrongAnimal
{
private:
	/* data */
protected:
	string _type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &instance);
	WrongAnimal		&operator=(const WrongAnimal& copie);
	virtual ~WrongAnimal();

	void makeSound() const;
	const string getType() const;
};


#endif // __WRONGANIMAL_H__