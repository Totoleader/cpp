/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:29:14 by macote            #+#    #+#             */
/*   Updated: 2023/11/13 15:08:10 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EX01_H__
#define __EX01_H__

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>

template <typename T>
void iter( T *array, unsigned int len, void (*func)(T &))
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

#endif // __EX01_H__