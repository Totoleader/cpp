/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:47:26 by macote            #+#    #+#             */
/*   Updated: 2024/01/23 14:53:43 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BITCOINEXCHANGE_H__
#define __BITCOINEXCHANGE_H__

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <regex>
#include <sstream>
#include <map>
#include <algorithm>

using std::string;

class BitcoinExchange
{
private:
	std::map<int, float> _dataBase;
	
	std::regex _inputReg;
	std::regex _dataBaseReg;
	std::smatch _match;


	int		convertDate(string);
	float	convertValue(string);
	void	printResult(string, float, std::map<int, float>::iterator);
	void 	checkDate(string line);
	
public:
	BitcoinExchange();
	~BitcoinExchange();

	void addToDataBase(string);
	void evaluateInput(string);

	
	class BadFormatException : public std::exception 
	{
	public:
    const char* what() const throw(){return "Error: bad format.";}
	};
	class NegativeNumberException : public std::exception 
	{
	public:
    const char* what() const throw(){return "Error: not a positive number.";}
	};
	class LargeNumberException : public std::exception 
	{
	public:
    const char* what() const throw(){return "Error: too large a number.";}
	};
};

#endif // __BITCOINEXCHANGE_H__