/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:53:26 by macote            #+#    #+#             */
/*   Updated: 2023/12/08 12:52:27 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("<Unnamed>", "<No Target>", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(string name, string target): Form(name, target, 25, 5)
{
}

PresidentialPardonForm* PresidentialPardonForm::createInstance(string type, string target)
{
	return (new PresidentialPardonForm(type, target));
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &instance): Form(instance)
{
	*this = instance;	
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copie)
{
	Form::operator=(copie);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute_() const
{
	cout << endl << "🎺 The herewith document is presented to apprise you of the circumstance wherein our esteemed President has pardoned " << getTarget() << ". 🎺" << endl;
}
