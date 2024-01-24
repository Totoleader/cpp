/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:30:07 by macote            #+#    #+#             */
/*   Updated: 2023/12/08 12:48:15 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
		/* data */
	public:
		ShrubberyCreationForm(/* args */);
		ShrubberyCreationForm(string name, string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &instance);

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm& copie);
		~ShrubberyCreationForm();

		void execute_() const;
};

#endif // __SHRUBBERYCREATIONFORM_H__