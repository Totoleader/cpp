/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:20:44 by macote            #+#    #+#             */
/*   Updated: 2023/09/28 12:21:24 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ex01.hpp"

void add_contact_to_phonebook(PhoneBook *phonebook)
{
	std::cout << std::endl << "Fill in contact info..." << std::endl;
	phonebook->add_contact();
	std::cout << "Contact added." << std::endl << std::endl;
}
