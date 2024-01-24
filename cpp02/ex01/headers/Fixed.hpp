/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:36:10 by macote            #+#    #+#             */
/*   Updated: 2023/10/16 12:23:22 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <cmath>

using std::cout;
using std::endl;
using std::roundf;

class Fixed
{
	private:
		int _nbRaw;
		static const int _nbFrac = 8;
		
	public:
		Fixed(void);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed &instance);
		~Fixed();
	
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed& operator=(const Fixed &copie);

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
