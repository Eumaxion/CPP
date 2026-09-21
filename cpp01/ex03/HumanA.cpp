/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 20:21:56 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/21 20:18:50 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon){
}
HumanA::~HumanA(){}

void HumanA::attack()
{
    std::cout << RED << this->_name << " attacks with their " << _weapon.getType() << RESET << std::endl;
}
