/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:41:26 by macote            #+#    #+#             */
/*   Updated: 2023/12/08 12:51:42 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_H__
#define __INTERN_H__

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <map>
#include <functional>

class Intern
{
private:
	Form *_forms[3];

public:
	Intern(/* args */);
	~Intern();

	Form *makeForm(string type, string target);

	class FormNotFoundException: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Form type was not found: creating blank form.");
			}
	};
};


#endif // __INTERN_H__