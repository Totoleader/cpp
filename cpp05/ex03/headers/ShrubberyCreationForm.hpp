/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:30:07 by macote            #+#    #+#             */
/*   Updated: 2023/12/08 12:53:02 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		/* data */
	public:
		ShrubberyCreationForm(/* args */);
		ShrubberyCreationForm(const ShrubberyCreationForm &instance);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm& copie);
		ShrubberyCreationForm(string name, string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm *createInstance(string type, string target);


		void execute_() const;
};



#endif // __SHRUBBERYCREATIONFORM_H__