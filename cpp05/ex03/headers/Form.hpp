/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:12:14 by macote            #+#    #+#             */
/*   Updated: 2023/10/27 14:22:29 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
#define __FORM_H__

#include "Bureaucrat.hpp"
#include <string>
#include <cstdlib>
#include <fstream>
#include <iostream>
#define poem "\n🌚 In the ephemeral hush of twilight, elusive silhouettes waltz, intertwining profundity with the void, evoking a semblance of existential ponderance.(exiting program) ✌️ 🌚\n"
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
	const string	_target;

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
	class UnsignedFormException: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Form has not been signed");
			}
	};

	//CONSTRUCTORS
	Form();
	Form(string name, string target, int signGrade, int executeGrade);
	Form(const Form &instance);
	Form	&operator=(const Form& copie);
	virtual ~Form();

	//ACCESSORS
	string	getName()			const;
	bool	getSigned()			const;
	int		getSignGrade()		const;
	int		getexecuteGrade()	const;
	string	getTarget()			const;

	//FONCTION MEMBRE
	void beSigned(Bureaucrat &bureaucrat, bool fromSignForm);
	void execute(Bureaucrat &bureaucrat) const;
	virtual void execute_() const;

	virtual Form* createInstance(string type, string target);

	

};



std::ostream &operator<<(std::ostream &out, const Form &form);

#endif // __FORM_H__