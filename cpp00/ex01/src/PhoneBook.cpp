/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:32:45 by macote            #+#    #+#             */
/*   Updated: 2023/09/27 16:25:27 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ex01.hpp"

void  PhoneBook::add_contact(void)
{
	contact_list_[oldest_contact_index_].init_contact(oldest_contact_index_);
	
	if (++oldest_contact_index_ >= 8)
		oldest_contact_index_ = 0;
}

//constructor
PhoneBook::PhoneBook(void) : oldest_contact_index_(0)
{
}

//Destructor
PhoneBook::~PhoneBook(void)
{
}

