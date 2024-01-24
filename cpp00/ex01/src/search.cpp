/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:29:28 by macote            #+#    #+#             */
/*   Updated: 2023/09/28 13:31:55 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ex01.hpp"

std::string format_search(const std::string str)
{
	int len;
	std::string output;

	len = str.size();
	output = str;
	
	if (len >= 10)
		output.replace(9, 1, ".");
	else
		output.insert(0, 10 - len, ' ');
		
	output.resize(10);
	return (output);
}

std::string format_search(const int index)
{
	std::string output;
	
	output.insert(0, 9, ' ');
	output.insert(9, 1, index + 48);
	output.resize(10);
		
	return (output);
}

void search_again(PhoneBook *phonebook)
{
	char c = 0;
	
	while (c != 'y' && c != 'n')
	{
		std::cout << std::endl << "Search again? y/n: ";
		std::cin >> c;
	}
	if (c == 'y')
		search_contact_list(phonebook);
}

void print_contact_list(PhoneBook *phonebook)
{
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "--------------Contact List-----------------" << std::endl << std::endl;
	int i = 0;
	while (i < 8 && phonebook->contact_list_[i].get_index() != -1)
	{
		std::cout << format_search(phonebook->contact_list_[i].get_index()) << " | ";
		std::cout << format_search(phonebook->contact_list_[i].get_firstname()) << " | ";
		std::cout << format_search(phonebook->contact_list_[i].get_lastname()) << " | ";
		std::cout << format_search(phonebook->contact_list_[i].get_phone_number()) << " | " << std::endl;
		i++;
	}
	std::cout << std::endl << "-------------------------------------------" << std::endl;
}

bool empty_list(PhoneBook *phonebook)
{
	if (phonebook->contact_list_[0].get_index() == -1)
	{
		std::cout << "Empty." << std::endl << std::endl;
		return (true);
	}
	return (false);
}


void get_contact_info(PhoneBook *phonebook)
{
	char index;
	
	std::cout << std::endl << "Enter contact index for more info: ";
	std::cin >> index;
	
	if (index > '7' || index < '0' || phonebook->contact_list_[index - 48].get_index() == -1)
	{
		std::cout << std::endl << "Invalid contact.";
		search_again(phonebook);
		return ;
	}
	
	std::cout << std::endl;
	std::cout << "-----------------Contact info--------------" << std::endl;
	std::cout << "Index: " << phonebook->contact_list_[index - 48].get_index() << std::endl;
	std::cout << "First name: " << phonebook->contact_list_[index - 48].get_firstname() << std::endl;
	std::cout << "Last name: " << phonebook->contact_list_[index - 48].get_lastname() << std::endl;
	std::cout << "Phone number: " << phonebook->contact_list_[index - 48].get_phone_number() << std::endl;
	std::cout << "Nickname: " << phonebook->contact_list_[index - 48].get_nickname() << std::endl;
	std::cout << "Secret: " << phonebook->contact_list_[index - 48].get_secret() << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
}


void search_contact_list(PhoneBook *phonebook)
{
	if (empty_list(phonebook))
		return ;
	print_contact_list(phonebook);
	get_contact_info(phonebook);
	search_again(phonebook);
}
