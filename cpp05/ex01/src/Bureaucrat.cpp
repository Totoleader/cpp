/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:00:47 by macote            #+#    #+#             */
/*   Updated: 2023/10/25 12:58:23 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(/* args */): _name("<Unnamed>"), _grade(150)
{
	
}

Bureaucrat::Bureaucrat(const Bureaucrat &instance): _name(instance.getName())
{
	*this = instance;	
}

Bureaucrat::Bureaucrat(string name, int grade): _name(name), _grade(grade)
{
	try
	{
		if (_grade > 150)
			throw GradeTooLowException();
		if (_grade < 1)
			throw GradeTooHighException();
	}
	catch (const GradeTooHighException &e)
	{
		_grade = 1;
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	catch (const GradeTooLowException &e)
	{
		_grade = 150;
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copie)
{
	// _name = copie.getName();
	_grade = copie.getGrade();

	return *this;
}

ostream& operator<<(ostream &output, const Bureaucrat &bureaucrat)
{
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return output;
}

Bureaucrat::~Bureaucrat()
{
	
}

void Bureaucrat::incrGrade()
{
	try
	{
		if (_grade <= 1)
			throw GradeTooHighException();
		_grade--;
	}
	catch (const GradeTooHighException &e)
	{
		_grade = 1;
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
}

void Bureaucrat::decrGrade()
{
	try
	{
		if (_grade >= 150)
			throw GradeTooLowException();
		_grade++;
	}
	catch (const GradeTooLowException &e)
	{
		_grade = 150;
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
}


void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this, 1);
	}
	catch(const GradeTooLowException& e)
	{
		std::cerr << _name << " couldn't sign " << form.getName() << " because: "<< e.what() << "." << '\n';
	}
}

string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

