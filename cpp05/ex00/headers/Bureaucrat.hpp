/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:01:13 by macote            #+#    #+#             */
/*   Updated: 2023/11/28 11:04:51 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <string>
#include <cstdlib>
#include <fstream>
#include <iostream>

using std::cout;
using std::string;
using std::endl;
using std::ostream;

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
		~Bureaucrat();

		//FONCITONS MEMBRES
		void			incrGrade();
		void			decrGrade();
		
		//ACCESSEURS
		string	getName()	const;
		int		getGrade()	const;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif // __BUREAUCRAT_H__
