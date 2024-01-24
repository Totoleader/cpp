/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:30:32 by macote            #+#    #+#             */
/*   Updated: 2023/12/08 12:52:58 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_H__
#define __ROBOTOMYREQUESTFORM_H__

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		/* data */
	public:
		RobotomyRequestForm(/* args */);
		RobotomyRequestForm(const RobotomyRequestForm &instance);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm& copie);
		RobotomyRequestForm(string name, string target);
		~RobotomyRequestForm();
		RobotomyRequestForm *createInstance(string type, string target);

		void execute_() const;
};

#endif // __ROBOTOMYREQUESTFORM_H__