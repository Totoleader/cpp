/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:53:05 by macote            #+#    #+#             */
/*   Updated: 2023/10/31 12:13:33 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <thread>


RobotomyRequestForm::RobotomyRequestForm(): AForm("<Unnamed>", "<No Target>", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(string name, string target): AForm(name, target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &instance): AForm(instance)
{
	*this = instance;	
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copie)
{
	AForm::operator=(copie);
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
	