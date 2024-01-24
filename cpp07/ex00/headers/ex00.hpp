/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:16:58 by macote            #+#    #+#             */
/*   Updated: 2023/11/13 14:17:23 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX00_H__
#define __EX00_H__

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>

template<typename T>
void swap( T &s1, T &s2)
{
	T temp = s1;

	s1 = s2;
	s2 = temp;
}

template<typename T>
T min( const T &s1, const T &s2)
{
	return (s1 > s2 ? s2 : s1);
}

template<typename T>
T max( const T &s1, const T &s2)
{
	return (s1 < s2 ? s2 : s1);
}

#endif // __EX00_H__