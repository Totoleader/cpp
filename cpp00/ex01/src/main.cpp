/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:34:01 by macote            #+#    #+#             */
/*   Updated: 2023/09/28 12:29:36 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ex01.hpp"

void find_command(std::string command, PhoneBook *phonebook)
{
	if (command == "ADD")
		add_contact_to_phonebook(phonebook);	
		
	else if (command == "SEARCH")
		search_contact_list(phonebook);
}

void launch_prompt()
{
	PhoneBook phonebook;
	std::string user_input;
	
	std::cout << std::endl;
	while (true)
	{
		std::cout << "Input: ";
		std::getline(std::cin, user_input);
		if (user_input == "EXIT")
			break ;
		
		find_command(user_input, &phonebook);
	}
}

int main(void)
{
	launch_prompt();

	return (0);
}
	