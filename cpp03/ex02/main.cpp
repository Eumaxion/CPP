/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:30:43 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/23 15:32:11 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
		Robot4.attack("Megatron");
		Robot4.beRepaired(22);
		Robot4.takeDamage(21);
		Robot4.beRepaired(22);
		Robot4.guardGate();
		Robot4.guardGate();
		Robot5.attack("Megatron");
		Robot5.takeDamage(101);
		Robot5.takeDamage(15);
		Robot5.attack("Megatron");
        Robot6.takeDamage(20);
        Robot6.guardGate();
	}
    {
        std::cout << YELLOW << "### FRAGTRAP TEST ###" << RESET << std::endl;
		std::cout << YELLOW << "BUILDING ROBOTS" << RESET << std::endl;

		FragTrap Robot7;
		FragTrap Robot8("bumblebee");
        FragTrap Robot9;
        Robot9 = Robot7;
        
        std::cout << YELLOW << "ROBOTS ACTING" << RESET << std::endl;
		Robot7.attack("CloneTrap");
		Robot7.beRepaired(22);
		Robot7.takeDamage(21);
		Robot7.beRepaired(22);
		Robot7.highFivesGuys();
		Robot7.highFivesGuys();
		Robot8.attack("Unicron");
		Robot8.takeDamage(101);
		Robot8.takeDamage(15);
		Robot8.attack("Unicron");
        Robot9.takeDamage(20);
        Robot9.highFivesGuys();
	}
	return (0);
}