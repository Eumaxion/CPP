/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:30:27 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/22 21:30:28 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(), _name("default"), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << BLUE << "ScavTrap default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

	std::cout << BLUE << "ScavTrap constructor called for " << _name << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << BLUE << "ScavTrap copy constructor called" << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
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