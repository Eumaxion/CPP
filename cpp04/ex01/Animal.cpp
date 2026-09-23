/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:44:57 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/23 18:47:27 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << BLUE << "Animal default constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal &copy) : _type(copy._type)
{
	std::cout << BLUE << "Animal copy constructor called" << RESET << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
	std::cout << BLUE << "Animal copy assignment operator called" << RESET << std::endl;
	if (this != &copy)
		_type = copy._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << BLUE << "Animal destructor called" << RESET << std::endl;
}

void Animal::makeSound() const
{
	std::cout << BLUE << "Animal sound" << RESET << std::endl;
}

std::string Animal::getType() const
{
	return _type;
}