/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:05:18 by macote            #+#    #+#             */
/*   Updated: 2023/12/08 15:07:12 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATA_H__
#define __DATA_H__

#include <string>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <limits>

class Data
{
	private:
		unsigned int _value;

	public:
		Data();
		~Data();

		Data(const Data &instance);
		Data	&operator=(const Data& copie);
		unsigned int get_value() const;
		
};

#endif // __DATA_H__