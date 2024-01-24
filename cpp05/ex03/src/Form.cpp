/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:19:10 by macote            #+#    #+#             */
/*   Updated: 2023/10/26 14:07:58 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("<Unnamed>"), _signed(false), _signGrade(150), _executeGrade(150), _target("<No Target>")
{
}

Form::Form(string name, string target, int signGrade, int executeGrade): _name(name), _signGrade(signGrade),
_executeGrade(executeGrade), _target(target)
{
}

Form::Form(const Form &instance): _name(instance.getName()),
_signGrade(instance.getSignGrade()), _executeGrade(instance.getexecuteGrade())
{
	*this = instance;	
}

Form& Form::operator=(const Form& copie)
{
	_signed = copie.getSigned();

	return *this;
}

Form::~Form()
{
}

string Form::getName() const
{
	return (_name);
}

bool Form::getSigned() const
{
	return (_signed);
}

int Form::getSignGrade() const
{
	return (_signGrade);
}

int Form::getexecuteGrade() const
{
	return (_executeGrade);
}

string Form::getTarget() const
{
	return (_target);
}

void Form::beSigned(Bureaucrat &bureaucrat, bool fromSignForm)
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

void Form::execute(Bureaucrat &bureaucrat) const
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

std::ostream &operator<<(std::ostream &out, const Form &form)
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

void Form::execute_() const
{
	cout << endl << "*Nothing to execute*" << endl;
}

Form* Form::createInstance(string type, string target)
{
	(void) type;
	(void) target;
	return (new Form());
}