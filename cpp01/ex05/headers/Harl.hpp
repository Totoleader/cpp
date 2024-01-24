/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:14:49 by macote            #+#    #+#             */
/*   Updated: 2023/10/04 11:18:45 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
#define __HARL_H__

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

class Harl
{
	private:
		std::string levels[4];
		void (Harl::*message[4])(void);

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		Harl(void);
		~Harl();
	
		void complain(std::string level);

};

#endif // __HARL_H__