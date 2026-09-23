/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 18:28:36 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/23 18:37:23 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << YELLOW << "WrongCat default constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
	: WrongAnimal(copy)
{
	std::cout << YELLOW << "WrongCat copy constructor called" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	std::cout << YELLOW << "WrongCat copy assignment operator called" << RESET << std::endl;

	if (this != &copy)
		WrongAnimal::operator=(copy);
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << YELLOW << "WrongCat destructor called" << RESET << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << YELLOW << "Meoooooooou!" << RESET << std::endl;
}