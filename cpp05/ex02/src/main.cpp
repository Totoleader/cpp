/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:59:31 by macote            #+#    #+#             */
/*   Updated: 2023/10/31 12:20:15 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat				palpatine("Palpatine", 1);
	Bureaucrat				anakin("Anakin", 45);
	PresidentialPardonForm	presForm("Presidential form", "Jarjar Binks");
	ShrubberyCreationForm	shruForm("Shrubbery form", "Jarjar Binks");
	RobotomyRequestForm		roboForm("Robotomy form", "Jarjar Binks");

	cout << endl << endl << RED << "*****Unsigned Palpatine*****" << RESET << endl;
	presForm.execute(palpatine);
	shruForm.execute(palpatine);
	roboForm.execute(palpatine);
	
	cout << endl << endl << CYAN << "*****Unsigned Anakin*****" << RESET << endl;
	presForm.execute(anakin);
	roboForm.execute(anakin);
	shruForm.execute(anakin);

	cout << endl << endl << GREEN << "(*****Palpatine Signs every form*****)" << RESET << endl;
	palpatine.signForm(presForm);
	palpatine.signForm(roboForm);
	palpatine.signForm(shruForm);
	
	cout << endl << endl << RED << "*****Signed Palpatine*****" << RESET << endl;
	presForm.execute(palpatine);
	roboForm.execute(palpatine);
	shruForm.execute(palpatine);
	
	cout << endl << endl << CYAN << "*****Signed Anakin*****" << RESET << endl;
	cout << endl << "*should print error* "; presForm.execute(anakin);
	roboForm.execute(anakin);
	shruForm.execute(anakin);
	
	cout << endl << "*should print error* "; anakin.executeForm(presForm);
	anakin.executeForm(roboForm);
	anakin.executeForm(roboForm);

	cout << poem;
	return (0);
}