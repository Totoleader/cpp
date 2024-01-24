/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:24:05 by macote            #+#    #+#             */
/*   Updated: 2023/12/12 11:25:36 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void inc(int &nb)
{
	nb++;
}

void toUpper_(std::string &str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}

}

int main()
{
	int array[6] = {0, 1, 2, 3, 4, 5};
	std::string str_array[] = {"allo", "j'aime", "les pommes"};
	
	iter(array, 6, &inc);
	iter(str_array, 3, &toUpper_);
	
	for (int i = 0; i < 6; i++)
        std::cout << array[i] << " ";

	for (int i = 0; i < 3; i++)
        std::cout << str_array[i] << " ";

	return (0);
}
