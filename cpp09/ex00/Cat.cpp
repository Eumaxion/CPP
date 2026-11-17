/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:45:00 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/23 18:34:24 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << YELLOW << "Cat default constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat &copy)
	: Animal(copy)
{
	std::cout << YELLOW << "Cat copy constructor called" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << YELLOW << "Cat copy assignment operator called" << RESET << std::endl;

	if (this != &copy)
		Animal::operator=(copy);
	return *this;
}

Cat::~Cat()
{
	std::cout << YELLOW << "Cat destructor called" << RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << YELLOW << "Meoooooooou!" << RESET << std::endl;
}