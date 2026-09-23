/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 18:28:30 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/23 18:47:44 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << RED << "WrongAnimal default constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : _type(copy._type)
{
	std::cout << RED << "WrongAnimal copy constructor called" << RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	std::cout << RED << "WrongAnimal copy assignment operator called" << RESET << std::endl;
	if (this != &copy)
		_type = copy._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal destructor called" << RESET << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << RED << "WrongAnimal sound" << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
	return _type;
}