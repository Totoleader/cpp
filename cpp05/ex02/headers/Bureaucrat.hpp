/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:01:13 by macote            #+#    #+#             */
/*   Updated: 2023/10/31 12:05:45 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <string>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <AForm.hpp>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

using std::cout;
using std::string;
using std::endl;
using std::ostream;

class AForm;

class Bureaucrat
{
	private:
		const string	_name;
		int				_grade;

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

	
		//CONSTRUCTEURS
		Bureaucrat(/* args */);
		Bureaucrat(string name, int grade);
		Bureaucrat(const Bureaucrat &instance);
		Bureaucrat	&operator=(const Bureaucrat& copie);
		// ostream		&operator<<(ostream &output, const Bureaucrat &bureaucrat)
		~Bureaucrat();

		//FONCITONS MEMBRES
		void			incrGrade();
		void			decrGrade();
		void			signForm(AForm &form);
		void			executeForm(AForm const & form);
		
		//ACCESSEURS
		string	getName()	const;
		int		getGrade()	const;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif // __BUREAUCRAT_H__
