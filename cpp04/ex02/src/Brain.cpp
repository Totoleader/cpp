/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:12:12 by macote            #+#    #+#             */
/*   Updated: 2023/10/20 13:20:19 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(/* args */)
{
	cout << "Create brain." << endl;
}

Brain::Brain(const Brain &instance)
{
	*this = instance;
}

Brain& Brain::operator=(const Brain &copie)
{
	(void)copie;
	return *this;
}

Brain::~Brain()
{
}