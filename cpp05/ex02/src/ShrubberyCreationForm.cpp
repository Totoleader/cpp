/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:52:34 by macote            #+#    #+#             */
/*   Updated: 2023/10/31 12:13:37 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("<Unnamed>", "<No Target>", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(string name, string target): AForm(name, target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &instance): AForm(instance)
{
	*this = instance;	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copie)
{
	AForm::operator=(copie);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute_() const
{
	std::ofstream outputFile;
	outputFile.open(getTarget() + "_shrubbery");
	
	outputFile << "                                                         ." << endl;
	outputFile << "                                              .         ;  " << endl;
	outputFile << "                 .              .              ;%     ;;   " << endl;
	outputFile << "                   ,           ,                :;%  %;   " << endl;
	outputFile << "                    :         ;                   :;%;'     .,   " << endl;
	outputFile << "           ,.        %;     %;            ;        %;'    ,;" << endl;
	outputFile << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << endl;
	outputFile << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << endl;
	outputFile << "               ;%;      %;        ;%;        % ;%;  ,%;'" << endl;
	outputFile << "                `%;.     ;%;     %;'         `;%%;.%;'" << endl;
	outputFile << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << endl;
	outputFile << "                    `:%;.  :;bd%;          %;@%;'" << endl;
	outputFile << "                      `@%:.  :;%.         ;@@%;'   " << endl;
	outputFile << "                        `@%.  `;@%.      ;@@%;         " << endl;
	outputFile << "                          `@%%. `@%%    ;@@%;        " << endl;
	outputFile << "                            ;@%. :@%%  %@@%;       " << endl;
	outputFile << "                              %@bd%%%bd%%:;     " << endl;
	outputFile << "                                #@%%%%%:;;" << endl;
	outputFile << "                                %@@%%%::;" << endl;
	outputFile << "                                %@@@%(o);  . '         " << endl;
	outputFile << "                                %@@@o%;:(.,'         " << endl;
	outputFile << "                            `.. %@@@o%::;         " << endl;
	outputFile << "                               `)@@@o%::;         " << endl;
	outputFile << "                                %@@(o)::;        " << endl;
	outputFile << "                               .%@@@@%::;         " << endl;
	outputFile << "                               ;%@@@@%::;.          " << endl;
	outputFile << "                              ;%@@@@%%:;;;. " << endl;
	outputFile << "                          ...;%@@@@@%%:;;;;,..           " << endl;
	outputFile.close();
}
