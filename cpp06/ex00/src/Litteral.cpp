/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Litteral.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:04:55 by macote            #+#    #+#             */
/*   Updated: 2023/12/08 15:08:56 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Litteral.hpp"

bool hasDecimalPart(double num) {
    return num != static_cast<int>(num);
}

Litteral::Litteral(): _litteral(""), _lValue(0) , _type(NOT_FOUND)
{
	
}

Litteral::Litteral(char *litteral): _litteral(litteral), _type(getType())
{
	if (_type == INT || _type == FLOAT || _type == DOUBLE)
		_lValue = stod(_litteral);
	else
		_lValue = 0;
}

Litteral::~Litteral()
{
}

Litteral::Litteral(const Litteral &instance)
{
	*this = instance;	
}

Litteral& Litteral::operator=(const Litteral& copie)
{
	this->_litteral = copie._litteral;
	this->_lValue	= copie._lValue;
	this->_type		= copie._type;
	
	return *this;
}

int Litteral::getType() const
{
	if (_litteral.find_first_not_of("1234567890") != std::string::npos && _litteral.length() == 1)
	{
		return (CHAR);
	}
	else if (_litteral.find_first_not_of("1234567890-") == std::string::npos)
	{
		return (INT);
	}
	else if (_litteral.find_first_not_of("1234567890-.") == std::string::npos
		&& _litteral.at(_litteral.length() - 1) != '.' && _litteral.at(0) != '.')
	{
		return (DOUBLE);
	}
	else if (_litteral.find_first_not_of("1234567890-.f") == std::string::npos
		&& _litteral != "" && _litteral.find('-', 1) == std::string::npos
		&& _litteral.at(_litteral.length() - 1) == 'f' && _litteral.at(0) != 'f'
		&& _litteral.at(_litteral.length() - 1) != '.' && _litteral.at(0) != '.'
		&& !(_litteral.at(0) == '+' && _litteral.at(1) == '.')
		&& !(_litteral.at(0) == '-' && _litteral.at(1) == '.'))
	{
		return (FLOAT);
	}
	else if (_litteral == "nan")
	{
		return (NAN_);
	}
	else if (_litteral == "inf" || _litteral == "+inf" || _litteral == "-inf")
	{
		return (INF_);
	}
	else 
		return (NOT_FOUND);
}

std::string Litteral::getLitteral() const
{
	return (_litteral);
}

void Litteral::convert_double() const
{
	std::cout << std::endl;

	//CHAR	
	if (_lValue < 32 || _lValue > 126)
		std::cout << "char	: Non displayable" << std::endl;
	else
		std::cout << "char	: " << static_cast<char>(_lValue) << std::endl;

	//INT
	if (_lValue > std::numeric_limits<int>::max() || _lValue < std::numeric_limits<int>::min())
		std::cout << "int	: Impossible" << std::endl;
	else
		std::cout << "int	: " << static_cast<int>(_lValue) << std::endl;

	//FLOAT
	if ((_lValue > std::numeric_limits<float>::max() || _lValue < std::numeric_limits<float>::max() * -1)
		|| ((_lValue < std::numeric_limits<float>::min() && _lValue > 0) || ((_lValue > std::numeric_limits<float>::min() * -1) && _lValue < 0)))
		std::cout << "float	: Impossible" << std::endl;
	else
	{
		std::cout << "float	: " << static_cast<float>(_lValue);
		if (!hasDecimalPart(_lValue))
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
		
	//DOUBLE
	std::cout << "double	: " << _lValue;
	if (!hasDecimalPart(_lValue))
		std::cout << ".0";
	std::cout << std::endl << std::endl;
}

void Litteral::convert_float() const
{
	int bust = _lValue > std::numeric_limits<float>::max() && _lValue < std::numeric_limits<float>::min();
	std::cout << std::endl;

	if (bust)
	{
		bad_print(FLOAT);
		return ;
	}
	//CHAR	
	if (_lValue < 32 || _lValue > 126)
		std::cout << "char	: Non displayable" << std::endl;
	else
		std::cout << "char	: " << static_cast<char>(_lValue) << std::endl;

	//INT
	if (_lValue > std::numeric_limits<int>::max() || _lValue < std::numeric_limits<int>::min())
		std::cout << "int	: Impossible" << std::endl;
	else
		std::cout << "int	: " << static_cast<int>(_lValue) << std::endl;

	//FLOAT
	std::cout << "float	: " << static_cast<float>(_lValue);
	if (!hasDecimalPart(_lValue))
		std::cout << ".0";
	std::cout << "f" << std::endl;
		
	//DOUBLE
	std::cout << "double	: " << _lValue;
	if (!hasDecimalPart(_lValue))
		std::cout << ".0";
	std::cout << std::endl << std::endl;	
}

void Litteral::convert_int() const
{
	int bust = _lValue > std::numeric_limits<int>::max() || _lValue < std::numeric_limits<int>::min();
	std::cout << std::endl;

	if (bust)
	{
		bad_print(INT);
		return ;
	}
	//CHAR	
	if (_lValue < 32 || _lValue > 126)
		std::cout << "char	: Non displayable" << std::endl;
	else
		std::cout << "char	: " << static_cast<char>(_lValue) << std::endl;

	//INT
	if (_lValue > std::numeric_limits<int>::max() || _lValue < std::numeric_limits<int>::min())
		std::cout << "int	: Impossible" << std::endl;
	else
		std::cout << "int	: " << static_cast<int>(_lValue) << std::endl;
		
	//FLOAT
	std::cout << "float	: " << static_cast<float>(_lValue);
	if (!hasDecimalPart(_lValue))
		std::cout << ".0";
	std::cout << "f" << std::endl;
		
	//DOUBLE
	std::cout << "double	: " << _lValue;
	if (!hasDecimalPart(_lValue))
		std::cout << ".0";
	std::cout << std::endl;
}

void Litteral::convert_char() const
{
	char input = _litteral.at(0);

	std::cout << std::endl;
	//CHAR	
	std::cout << "char	: " << input << std::endl;
	//INT
	std::cout << "int	: " << static_cast<int>(input) << std::endl;
	//FLOAT
	std::cout << "float	: " << static_cast<float>(input) << ".0f" << std::endl;
	//DOUBLE
	std::cout << "double	: " << static_cast<double>(input) << ".0" << std::endl;
	std::cout << std::endl;
}

void Litteral::bad_print(int type) const
{
	std::string types[4] = {"int", "float", "double", "random stuff"};
	
	std::cout << "Input is invalid for type: " << types[type - 1] << "." << std::endl;
}

void Litteral::convert() const
{
	if (_type == CHAR)
		convert_char();
	else if (_type == INT)
		convert_int();
	else if (_type == FLOAT)
		convert_float();
	else if (_type == DOUBLE)
		convert_double();
	else if (_type == NAN_)
	{
		std::cout << std::endl << "char	: impossible" << std::endl;
		std::cout <<  "int	: impossible" << std::endl;
		std::cout <<  "float	: nanf" << std::endl;
		std::cout <<  "double	: nan" << std::endl;
		std::cout << std::endl;
	}
	else if (_type == INF_)
	{
		std::cout << std::endl << "char	: impossible" << std::endl;
		std::cout <<  "int	: impossible" << std::endl;
		std::cout <<  "float	: impossible" << std::endl;
		std::cout <<  "double	: impossible" << std::endl;
		std::cout << std::endl;
	}
	else
		std::cout << "Enter valid input plzz.." << std::endl;
}