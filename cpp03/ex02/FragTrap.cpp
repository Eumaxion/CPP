/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:30:38 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/23 16:12:48 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << RED << "FragTrap default constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << RED << "FragTrap copy constructor called" << RESET << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	std::cout << RED << "FragTrap copy assignment operator called" << RESET << std::endl;
	if (this != &copy)
		{
			_name = copy._name;
			_hitPoints = copy._hitPoints;
			_energyPoints = copy._energyPoints;
			_attackDamage = copy._attackDamage;	
		}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "FragTrap destructor called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << RED << "FragTrap " << _name << " constructor called" << RESET <<  std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << RED << "FragTrap says: it's high five time!" << RESET << std::endl;
}