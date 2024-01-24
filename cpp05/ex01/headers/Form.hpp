/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:12:14 by macote            #+#    #+#             */
/*   Updated: 2023/10/31 11:16:42 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
#define __FORM_H__

#include "Bureaucrat.hpp"
#include <string>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <Form.hpp>

using std::cout;
using std::string;
using std::endl;
using std::ostream;

class Bureaucrat;

class Form
{
private:
	const string	_name;
	bool			_signed;
	const int		_signGrade;
	const int		_executeGrade;

public:
	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too high");
			}
	};
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too low");
			}
	};
	
	//CONSTRUCTORS
	Form();
	Form(string name, int signGrade, int executeGrade);
	Form(const Form &instance);
	Form	&operator=(const Form& copie);
	~Form();

	//ACCESSORS
	string	getName()			const;
	bool	getSigned()			const;
	int		getSignGrade()		const;
	int		getexecuteGrade()	const;

	//FONCTION MEMBRE
	void beSigned(Bureaucrat &bureaucrat, bool fromSignForm);

};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif // __FORM_H__