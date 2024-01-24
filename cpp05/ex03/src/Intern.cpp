/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:40:59 by macote            #+#    #+#             */
/*   Updated: 2023/12/08 13:01:44 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	_forms[0] = new PresidentialPardonForm();
	_forms[1] = new RobotomyRequestForm();
	_forms[2] = new ShrubberyCreationForm();
}

Intern::~Intern()
{
	delete _forms[0];
	delete _forms[1];
	delete _forms[2];
}

Form* Intern::makeForm(string type, string target)
{
	try
	{
		string types[] = {"presidential pardon", "robotomy request", "shrubbery creation", "NULL"};
		
		int i = -1;
		while (types[++i] != "NULL")
		{
			if (type == types[i])
			{
				cout << GREEN << "Intern has created: " << type << "." << RESET << endl;
				return _forms[i]->createInstance(type, target);
			}
		}
		throw FormNotFoundException();
	}
	catch(const FormNotFoundException& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
		return new Form(type, target, 150, 150);
	}
}
