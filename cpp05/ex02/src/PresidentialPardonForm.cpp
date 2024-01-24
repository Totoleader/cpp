/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:53:26 by macote            #+#    #+#             */
/*   Updated: 2023/10/31 12:13:26 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("<Unnamed>", "<No Target>", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(string name, string target): AForm(name, target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &instance): AForm(instance)
{
	*this = instance;	
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copie)
{
	AForm::operator=(copie);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute_() const
{
	cout << endl << "🎺 The herewith document is presented to apprise you of the circumstance wherein our esteemed President has pardoned " << getTarget() << ". 🎺" << endl;
}
