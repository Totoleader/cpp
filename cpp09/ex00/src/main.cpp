/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:01:47 by macote            #+#    #+#             */
/*   Updated: 2023/12/15 15:55:01 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void readInput(BitcoinExchange &bitCoin, string file, void (BitcoinExchange::*func)(string))
{
	string line;
	std::ifstream input_file;
	input_file.open(file);
	
	std::getline(input_file, line);
	while (std::getline(input_file, line))
	{
		if (line == "date,exchange_rate")
			continue;
		try
		{
			(bitCoin.*func)(line);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << " (line: \"" << line << "\")"<< '\n';
		}	
	}

	input_file.close();	
}

int main(int argc, char **argv)
{
	BitcoinExchange bitCoin;

	if (argc != 2)
		return (std::cerr << "Bad args." << std::endl, 1);
	
	readInput(bitCoin, "data.csv", &BitcoinExchange::addToDataBase);
	readInput(bitCoin, argv[1], &BitcoinExchange::evaluateInput);
	
	return (0);
}
