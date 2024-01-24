/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:59:31 by macote            #+#    #+#             */
/*   Updated: 2023/10/31 11:50:24 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Form order66("order 66", 50, 50);
	Bureaucrat palpatine("Palpatine", 69);

	cout << endl << order66.getName() <<" form status: " << endl << order66 << endl;
	
	cout << "Palpatine info: " << palpatine << endl << endl;
	palpatine.signForm(order66);


	for (size_t i = 0; i < 20; i++)
		palpatine.incrGrade();
	cout << "Giving Palpatine a promotion, he's now grade: " << palpatine.getGrade() << "." << endl << endl;
	
	palpatine.signForm(order66);
	
	cout << endl << "Form status: " << endl << order66 << endl;
	
	/////////////
	cout << endl << endl;
	
	Form newForm("order 67", 1, 1);
	newForm.beSigned(palpatine, 0);
	return (0);
}