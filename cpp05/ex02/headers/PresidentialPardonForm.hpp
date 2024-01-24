/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:39:42 by macote            #+#    #+#             */
/*   Updated: 2023/12/08 12:48:30 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		/* data */
	public:
		PresidentialPardonForm(/* args */);
		PresidentialPardonForm(const PresidentialPardonForm &instance);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm& copie);


		PresidentialPardonForm(string name, string target);
		~PresidentialPardonForm();
		
		void execute_() const;

};

#endif // __PRESIDENTIALPARDONFORM_H__