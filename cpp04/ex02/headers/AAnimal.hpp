/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:29:41 by macote            #+#    #+#             */
/*   Updated: 2023/10/12 11:37:38 by macote           ###   ########.fr       */
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

class AAnimal
{
	private:
		
	public:
		AAnimal();
		AAnimal(string type);
		AAnimal(const AAnimal &instance);
		AAnimal		&operator=(const AAnimal& copie);
		virtual	~AAnimal();

		virtual void makeSound() const = 0;
		const string getType() const;

	protected:
		string _type;	
};

#endif // __ANIMAL_H__