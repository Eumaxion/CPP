/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 19:42:26 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/17 19:42:27 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name){
	this->_name = name;
	std::cout << GREEN << "Zombie: " << _name << " created!" << RESET <<  std::endl;
}

Zombie::~Zombie(){
	std::cout << RED << "Zombie: " << _name << "  destroyed!" << RESET << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void  Zombie::announce( void )
{
	std::cout << BLUE << _name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}