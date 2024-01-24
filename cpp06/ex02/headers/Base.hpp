/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:02:13 by macote            #+#    #+#             */
/*   Updated: 2023/12/08 13:32:21 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE_H__
#define __BASE_H__

#include <string>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <limits>
#include <ctime>
#include <thread>

class Base
{
private:
	/* data */
public:
	Base(/* args */);
	virtual ~Base();
};

#endif // __BASE_H__