/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:59:31 by macote            #+#    #+#             */
/*   Updated: 2023/10/21 14:08:29 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	//ERRORS THROWN AT INCREMENTATION:
	Bureaucrat bob("Bob", 1);	
	cout << "SHOULD throw :"; bob.incrGrade();
	cout << bob << endl;

	Bureaucrat boba("Boba", 150);
	cout << "SHOULD throw :"; boba.decrGrade();
	
	//150 - 1 - 1 - 1 = 147 :
	cout << "Should NOT throw:"; boba.incrGrade(); cout << endl;
	cout << "Should NOT throw:"; boba.incrGrade(); cout << endl;
	cout << "Should NOT throw:"; boba.incrGrade(); cout << endl;
	
	//147 + 1 + 1 + 1 + 1 = 151 :
	cout << "Should NOT throw:"; boba.decrGrade(); cout << endl;
	cout << "Should NOT throw:"; boba.decrGrade(); cout << endl;
	cout << "Should NOT throw:"; boba.decrGrade(); cout << endl;
	cout << "SHOULD throw :"; boba.decrGrade();
	cout << boba << endl;



	//ERRORS THROWN AT CONSTRUCTION:
	cout << "SHOULD throw :"; Bureaucrat bobo("Bobo", 10000);
	cout << "SHOULD throw :"; Bureaucrat boby("Boby", -10000);
	cout << bobo << endl;
	cout << boby << endl;


	return (0);
}