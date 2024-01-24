/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:00:25 by macote            #+#    #+#             */
/*   Updated: 2023/11/17 13:52:01 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"

int main(void)
{
	ClapTrap billy;
	ClapTrap billyBob("Billy Bob", 100, 10, 10);
	ClapTrap bobbyBill("Bobby Bill", 100, 10, 10);

	billy.attack("Leonidas");
	billyBob.beRepaired(10);
	bobbyBill.takeDamage(110);
	bobbyBill.takeDamage(110);
	bobbyBill.attack("Mr Bean");
	bobbyBill.beRepaired(100000);
	
	return (0);
}