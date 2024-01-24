/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:19:10 by macote            #+#    #+#             */
/*   Updated: 2023/10/31 12:11:20 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("<Unnamed>"), _signed(false), _signGrade(150), _executeGrade(150), _target("<No Target>")
{
}

AForm::AForm(string name, string target, int signGrade, int executeGrade): _name(name), _signGrade(signGrade),
_executeGrade(executeGrade), _target(target)
{
}

AForm::AForm(const AForm &instance): _name(instance.getName()),
_signGrade(instance.getSignGrade()), _executeGrade(instance.getexecuteGrade())
{
	*this = instance;	
}

AForm& AForm::operator=(const AForm& copie)
{
	_signed = copie.getSigned();

	return *this;
}

AForm::~AForm()
{
}

string AForm::getName() const
{
	return (_name);
}

bool AForm::getSigned() const
{
	return (_signed);
}

int AForm::getSignGrade() const
{
	return (_signGrade);
}

int AForm::getexecuteGrade() const
{
	return (_executeGrade);
}

string AForm::getTarget() const
{
	return (_target);
}

void AForm::beSigned(Bureaucrat &bureaucrat, bool fromSignForm)
{
	try
	{
		if (bureaucrat.getGrade() > _signGrade && fromSignForm)
			throw Bureaucrat::GradeTooLowException();
		else if (bureaucrat.getGrade() > _signGrade)
			throw GradeTooLowException();
		_signed = true;
	}
	catch(const GradeTooLowException& e)
	{
		std::cerr << e.what() << endl;
	}
}

void AForm::execute(Bureaucrat &bureaucrat) const
{
	try
	{
		if (bureaucrat.getGrade() > _executeGrade)
			throw GradeTooLowException();
		if (!_signed)
			throw UnsignedFormException();
		execute_();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Caught an exception: " << e.what() << endl;
	}
}

std::ostream &operator<<(std::ostream &out, const AForm &form)
{
	out << "Name: " << form.getName() << endl;
	
	if (form.getSigned())
		out << "Signed: Yes" << endl;
	else
		out << "Signed: No" << endl;
				
	out << "Sign Grade: " << form.getSignGrade() << endl;
	out << "Execute Grade: " << form.getexecuteGrade() << endl;

	return (out);
}
