/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:26:45 by macote            #+#    #+#             */
/*   Updated: 2023/09/26 14:09:47 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ex00.hpp"

int main(int argc, char **argv)
{
	Megaphone megaphone;
	
	(void)argc;
	
	megaphone.print_upper(argv);
	return (0);
}
