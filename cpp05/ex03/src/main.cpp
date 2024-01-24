/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:59:31 by macote            #+#    #+#             */
/*   Updated: 2023/12/08 13:02:51 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Bureaucrat				palpatine("Palpatine", 1);
	Intern WillyWonka;
	
	cout << endl;
	Form *newForm = WillyWonka.makeForm("presidential pardon", "Lord Voldemort");
	cout << "newForm adress: " << newForm << endl;
	Form *newForm2 = WillyWonka.makeForm("presidential pardon", "Freddy Krueger");
	cout << "newForm2 adress: " << newForm2 << endl;
	Form *newForm3 = WillyWonka.makeForm("Form that does not exist", "someone that exists");
	cout << "newForm3 adress: " << newForm3 << endl;
	
	palpatine.signForm(*newForm);
	newForm->execute(palpatine);
	palpatine.signForm(*newForm2);
	newForm2->execute(palpatine);
	palpatine.signForm(*newForm3);
	newForm3->execute(palpatine);

	delete newForm;
	delete newForm2;
	delete newForm3;
	
	cout << poem;
	return (0);
}
