/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:30:21 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/23 15:26:17 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	{
        std::cout << YELLOW << "### CLAPTRAP TEST ###" << RESET << std::endl;
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
    }
	{
        std::cout << YELLOW << "### SCAVTRAP TEST ###" << RESET << std::endl;
		std::cout << YELLOW << "BUILDING ROBOTS" << RESET << std::endl;

		ScavTrap Robot4;
		ScavTrap Robot5("OptimusPrime");
        ScavTrap Robot6;
        Robot6 = Robot4;
        
        std::cout << YELLOW << "ROBOTS ACTING" << RESET << std::endl;
		Robot4.attack("CloneTrap");
		Robot4.beRepaired(22);
		Robot4.takeDamage(21);
		Robot4.beRepaired(22);
		Robot4.guardGate();
		Robot4.guardGate();
		Robot5.attack("OptimusPrime-clone");
		Robot5.takeDamage(101);
		Robot5.takeDamage(15);
		Robot5.attack("OptimusPrime-clone");
        Robot6.takeDamage(20);
        Robot6.guardGate();
	}
	return (0);
}
