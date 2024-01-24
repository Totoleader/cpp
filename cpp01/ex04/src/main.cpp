/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:08:02 by macote            #+#    #+#             */
/*   Updated: 2023/12/15 12:21:37 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ex04.hpp"

void replace_(std::string &input, std::string search, std::string replace)
{
	size_t find;
	size_t search_len = search.length();

	find = input.find(search);
	while (find != std::string::npos)
	{
		input.erase(find, search_len);
		input.insert(find, replace);
		find = input.find(search);	
	}	
}

void file_search_and_replace()
{
	std::string file;
	std::string temp;
	std::string output;
	std::string s1;
	std::string s2;
	std::ifstream inputFile;
	std::ofstream outputFile;

	std::cout << "Enter file: ";				std::getline(std::cin, file);
	std::cout << "Enter string to replace: ";	std::getline(std::cin, s1);
	std::cout << "Enter replacement string: ";	std::getline(std::cin, s2);
	std::cout << std::endl;

	inputFile.open(file);
	outputFile.open(file + ".replace");

	
	while (std::getline(inputFile, temp))
	{
		output = output + temp + "\n";
	}
		
	replace_(output, s1, s2);
	outputFile << output;
	
	inputFile.close();
	outputFile.close();
}

int main(void)
{
	file_search_and_replace();
	
	return (EXIT_SUCCESS);
}
