/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:29:51 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/23 13:07:29 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREEN << "ClapTrap default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREEN << "ClapTrap constructor called for " << _name <<  RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << GREEN << "ClapTrap copy constructor called" <<  RESET << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << GREEN << "ClapTrap destructor called for " << _name <<  RESET << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_hitPoints <= 0)
	{
		std::cout << GREEN << "ClapTrap " << _name << " cannot attack because it has no hit points." <<  RESET << std::endl;
		return;
	}
	if (_energyPoints <= 0)
	{
		std::cout << GREEN << "ClapTrap " << _name << " cannot attack because it has no energy." <<  RESET << std::endl;
		return;
	}
	std::cout << GREEN << "ClapTrap " << _name << " attacks " << target  << ", causing " << _attackDamage << " points of damage!" <<  RESET << std::endl;
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
		return;
	if (amount >= static_cast<unsigned int>(_hitPoints))
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << GREEN << "ClapTrap " << _name << " takes " << amount << " points of damage!" <<  RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
		return;
	if (_energyPoints <= 0)
	{
		std::cout << GREEN << "ClapTrap " << _name << " cannot repair because it has no energy." <<  RESET << std::endl;
		return;
	}
	_hitPoints += amount;
	_energyPoints--;
	std::cout << GREEN << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" <<  RESET << std::endl;
}