/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:59:44 by macote            #+#    #+#             */
/*   Updated: 2023/12/14 10:50:57 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_H__
#define __EASYFIND_H__

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int nb)
{
	return std::find(container.begin(), container.end(), nb);
}

#endif // __EASYFIND_H__