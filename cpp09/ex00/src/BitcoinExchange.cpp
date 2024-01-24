/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:46:31 by macote            #+#    #+#             */
/*   Updated: 2024/01/23 15:10:02 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


////////////////////////////
//     Constructors       //
////////////////////////////
BitcoinExchange::BitcoinExchange():
	_inputReg("[0-9]{4}-[0-9]{2}-[0-9]{2} \\| ([+-]?(?:\\d+)?(?:\\.?\\d*))(?:[Ee]([+-]?\\d+))?"),
	_dataBaseReg("\\b\\d{4}-\\d{2}-\\d{2},[+-]?(?:\\d+)?(?:\\.?\\d*)")
{
}
BitcoinExchange::~BitcoinExchange()
{
}


////////////////////////////
//     Member functions   //
////////////////////////////
void BitcoinExchange::addToDataBase(string line)
{
	if (!std::regex_search(line, _match, _dataBaseReg))
		throw BadFormatException();
	
	int date = convertDate(line);
	float value = convertValue(line);

	_dataBase[date] = value;
}

void BitcoinExchange::checkDate(string line)
{
	std::stringstream ss(line);
	string token;
	
	std::getline(ss, token, '-');
	std::getline(ss, token, '-');
	if ((token.at(0) > '1' && token.at(1) > '2')
		|| (token.at(0) == '0' && token.at(1) == '0'))
		throw BadFormatException();
	std::getline(ss, token, '-');
	if ((token.at(0) > '3' && token.at(1) > '1')
		|| (token.at(0) == '0' && token.at(1) == '0'))
		throw BadFormatException();
}

void BitcoinExchange::evaluateInput(string line)
{
	if (!std::regex_search(line, _match, _inputReg))
		throw BadFormatException();
	checkDate(line);
	
	int		date = convertDate(line);
	float	value = convertValue(line);

	if (value < 0)
		throw NegativeNumberException();
	else if (value > 1000)
		throw LargeNumberException();

	std::map<int, float>::iterator it = _dataBase.find(date);
	if (it != _dataBase.end())//try to find the exact key
	{
		printResult(line, value, it);
	}
	else//try to find key lower
	{
		it = _dataBase.lower_bound(date);
		printResult(line, value, --it);
	}
}


////////////////////////////
//Private member functions//
////////////////////////////
int BitcoinExchange::convertDate(string line)
{
	int date;

	line.erase(line.find("-"), 1);
	line.erase(line.find("-"), 1);
	
	if (line.find(" ") != string::npos)
		line.erase(line.find(" "));

	else if (line.find(",") != string::npos)
		line.erase(line.find(","));

	date = std::stoi(line);
	return date;
}

float BitcoinExchange::convertValue(string line)
{
	float value;

	if (line.find("|") != string::npos)
		line = line.substr(line.find("|") + 2);//for input
	else
		line = line.substr(line.find(",") + 1);//for dataBase
	
	value = std::stof(line);
	return (value);
}

void BitcoinExchange::printResult(string line, float value, std::map<int, float>::iterator it)
{
	if (it == _dataBase.begin())
		std::cout << "No data for this date." << std::endl;
	else
	{
		std::cout << line.substr(0, line.find(" ")) << " => " << value << " = " << value * ((*it).second) << std::endl;
		
	}
}
