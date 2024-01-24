/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:53:05 by macote            #+#    #+#             */
/*   Updated: 2023/12/08 12:41:10 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <thread>


RobotomyRequestForm::RobotomyRequestForm(): Form("<Unnamed>", "<No Target>", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(string name, string target): Form(name, target, 72, 45)
{
}

RobotomyRequestForm* RobotomyRequestForm::createInstance(string type, string target)
{
	return (new RobotomyRequestForm(type, target));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &instance): Form(instance)
{
	*this = instance;	
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copie)
{
	Form::operator=(copie);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute_() const
{
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	cout << endl << "*DRRRRRRRRRRR WATATA*";
	cout.flush();
	for (size_t i = 0; i < 5; i++)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		cout << ".";
		cout.flush();
	}
	srand(time(0));
	if ((rand() % 2))
	{
		cout << "💀 In the theater of fate, the operation's lament echoed, as " << getTarget() << " met his tragic demise in a somber, gruesome dance. 💀" << endl;
	}
	else
	{
		cout << "🥳 Operation triumphant, a joyous morn for " << getTarget() << ", where the sun graciously bestows another day to grace his countenance. 🥳" << endl;
	}
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
}
	