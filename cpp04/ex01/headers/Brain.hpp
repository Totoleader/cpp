/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:11:39 by macote            #+#    #+#             */
/*   Updated: 2023/10/23 12:01:56 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
#define __BRAIN_H__

#include "Animal.hpp"

class Brain
{
private:
	string _ideas[100];
public:
	Brain(/* args */);
	Brain(const Brain &instance);
	Brain		&operator=(const Brain& copie);
	~Brain();
};

#endif // __BRAIN_H__