/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:29:41 by macote            #+#    #+#             */
/*   Updated: 2023/10/20 14:43:33 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using std::cout;
using std::string;
using std::endl;

class Animal
{
	private:
		
	public:
		Animal();
		Animal(string type);
		Animal(const Animal &instance);
		Animal		&operator=(const Animal& copie);
		virtual ~Animal();

		virtual void makeSound() const;
		const string getType() const;
	
	protected:
		string _type;	
};

#endif // __ANIMAL_H__