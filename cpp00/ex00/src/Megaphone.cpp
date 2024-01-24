/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:26:29 by macote            #+#    #+#             */
/*   Updated: 2023/09/26 14:09:43 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ex00.hpp"

char *Megaphone::string_to_upper(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		i++;
	}
	return (str);
}

void Megaphone::print_upper(char **argv)
{
	int i;
	i = 1;
	while (argv[i])
	{
		argv[i] = string_to_upper(argv[i]);
		std::cout <<argv[i];
		i++;
	}
	if (!argv[1])
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout <<std::endl;
}
