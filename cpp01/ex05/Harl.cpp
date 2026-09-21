/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 22:02:46 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/21 22:20:20 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}
void Harl::debug( void )
{
	std::cout << GREEN << "I AM DEBUG" << RESET << std::endl;
}
void Harl::info( void )
{
	std::cout << BLUE << "I AM INFO" << RESET << std::endl;
}

void Harl::warning( void )
{
	std::cout << YELLOW << "I AM WARNING" << RESET << std::endl;
}

void Harl::error( void )
{
	std::cout << RED << "I AM ERROR" << RESET << std::endl;
}
	
void Harl::complain(std::string level)
{
	std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR",};
	void (Harl::*func[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i ++)
	{
		if (level == lvl[i])
		{
			(this->*func[i])();
			return ;
		}
	}
	std::cout << "invalid complaining lvl!!" << std::endl;
}