/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:41:40 by macote            #+#    #+#             */
/*   Updated: 2023/09/28 14:37:34 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ex01.hpp"

//Constructor
Contact::Contact(void)
: index_(-1), first_name_(""), last_name_(""),
		nickname_(""), phone_number_(""), secret_("")
{
}

//Destructor
Contact::~Contact()
{
	std::cout << "destroyed.\n";
}



//Prompts the user to input attributes values
void Contact::init_contact(int contact_index)
{
	std::string prompt[5];
	std::string input;

	prompt[0] = "First name: ";
	prompt[1] = "Last name: ";
	prompt[2] = "Nickname: ";
	prompt[3] = "Phone number: ";
	prompt[4] = "Secret: ";
	
	set_index_(contact_index);
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << prompt[i]; 
		std::getline(std::cin, input);
		if (input.empty())
		{
			std::cout << "No input is invalid." << std::endl;
			i--;
			continue ;
		}
		
		set_info(input, i);
	}
}



//SETTERS
void Contact::set_first_name_(std::string first_name)
{
	this->first_name_ = first_name;
}

void Contact::set_last_name_(std::string last_name)
{
	this->last_name_ = last_name;
}

void Contact::set_nickname_(std::string nickname)
{
	this->nickname_ = nickname;
}

void Contact::set_phone_number_(std::string phone_number)
{
	this->phone_number_ = phone_number;
}

void Contact::set_secret_(std::string secret)
{
	this->secret_ = secret;
}

void Contact::set_index_(int index)
{
	this->index_ = index;
}

//setter where attribute is specified as parameter
void Contact::set_info(std::string input, int attribute)
{
	if (attribute == FIRST_NAME)
		set_first_name_(input);
	else if (attribute == LAST_NAME)
		set_last_name_(input);
	else if (attribute == NICKNAME)
		set_nickname_(input);
	else if (attribute == PHONE_NUMBER)
		set_phone_number_(input);
	else if (attribute == SECRET)
		set_secret_(input);
}


//GETTERS
std::string Contact::get_firstname(void) const
{
	return (this->first_name_);
}

std::string Contact::get_lastname(void) const
{
	return (this->last_name_);
}

std::string Contact::get_phone_number(void) const
{
	return (this->phone_number_);
}

std::string Contact::get_nickname(void) const
{
	return (this->nickname_);
}

std::string Contact::get_secret(void) const
{
	return (this->secret_);
}

int Contact::get_index(void) const
{
	return (this->index_);
}
