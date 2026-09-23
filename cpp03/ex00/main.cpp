/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 22:21:43 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/23 14:00:12 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::cout << YELLOW << "BUILDING ROBOTS" << RESET << std::endl;
    ClapTrap Robot1;
	ClapTrap Robot2("R2D2");
    ClapTrap Robot3;
    Robot3 = Robot2;
    std::cout << YELLOW << "ROBOTS ACTING" << RESET << std::endl;
	Robot2.attack("C3PO");
	Robot2.takeDamage(2);
	Robot2.beRepaired(1);
	std::cout << YELLOW << "R2D2 only has 8 points of energy left" << RESET << std::endl; 
	for (int i = 0; i < 10; i++)
		Robot2.attack("C3PO");
    Robot1.attack("Robot3");
    Robot3.takeDamage(0);

	return 0;
}