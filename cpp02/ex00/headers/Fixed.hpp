/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:36:10 by macote            #+#    #+#             */
/*   Updated: 2023/10/06 12:00:44 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using std::cout;
using std::endl;

class Fixed
{
	private:
		int _nbRaw;
		static const int _nbFrac = 8;
		
	public:
		Fixed(void);
		Fixed(const Fixed &instance);
		~Fixed();
	
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		Fixed& operator=(const Fixed &copie);

};

#endif
