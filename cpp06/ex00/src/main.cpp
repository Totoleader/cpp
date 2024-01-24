/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:36:22 by macote            #+#    #+#             */
/*   Updated: 2023/11/10 12:03:10 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Litteral.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);

	Litteral litteral(argv[1]);

	litteral.convert();

	return (0);
}
