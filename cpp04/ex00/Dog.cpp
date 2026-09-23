/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:45:05 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/23 18:31:57 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	_type = "Dog";
	std::cout << GREEN << "Dog default constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << GREEN << "Dog copy constructor called" << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << GREEN << "Dog copy assignment operator called" << RESET << std::endl;

	if (this != &copy)
		Animal::operator=(copy);
	return *this;
}

Dog::~Dog()
{
	std::cout << GREEN << "Dog destructor called" << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << GREEN << "Woooooooooooooooooooof!" << RESET << std::endl;
}