/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:30:27 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/23 16:14:45 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << BLUE << "ScavTrap: Default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << BLUE << "ScavTrap constructor called for " << _name << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << BLUE << "ScavTrap copy constructor called" << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_hitPoints = copy._hitPoints;
		_energyPoints = copy._energyPoints;
		_attackDamage = copy._attackDamage;	
	}
	std::cout << BLUE << "ScavTrap operator= constructor called" << RESET << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << BLUE << "ScavTrap destructor called for " << _name << RESET << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_hitPoints <= 0)
	{
		std::cout << BLUE << "ScavTrap " << _name << " cannot attack because it has no hit points." << RESET << std::endl;
		return;
	}
	if (_energyPoints <= 0)
	{
		std::cout << BLUE << "ScavTrap " << _name << " cannot attack because it has no energy." << RESET << std::endl;
		return;
	}
	std::cout << BLUE << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << RESET << std::endl;

	_energyPoints--;
}

void ScavTrap::guardGate()
{
	std::cout << BLUE << "ScavTrap " << _name << " is now in Gate keeper mode." << RESET << std::endl;
}