/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Litteral.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:05:02 by macote            #+#    #+#             */
/*   Updated: 2023/12/08 15:19:48 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LITTERAL_H__
#define __LITTERAL_H__

#include <string>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <limits>

#define CHAR		0
#define INT			1
#define FLOAT		2
#define DOUBLE		3
#define NOT_FOUND	4
#define NAN_		5
#define INF_		6

class Litteral
{
	private:
		std::string	_litteral;
		double		_lValue;
		int			_type;
	
	
	public:
		Litteral(/* args */);
		Litteral(char *litteral);
		~Litteral();

		Litteral(const Litteral &instance);
		Litteral	&operator=(const Litteral& copie);
		
		void	convert_char()		const;
		void	convert_double()	const;
		void	convert_float()		const;
		void	convert_int()		const;

		void	bad_print(int type)			const;
		int getType() const;

		void convert() const;
	
		std::string		getLitteral()	const;
};

#endif // __LITTERAL_H__
