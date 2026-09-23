/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 18:47:31 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/23 19:05:14 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << CYAN <<  "Brain default constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << CYAN << "Brain copy constructor called" << RESET << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << CYAN << "Brain copy assignment operator called" << RESET << std::endl;

	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = copy._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << CYAN << "Brain destructor called" << RESET << std::endl;
}