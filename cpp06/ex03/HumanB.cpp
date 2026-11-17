/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 20:22:02 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/21 21:13:28 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL){};
HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}
void HumanB::attack() {
    if (_weapon)
        std::cout << BLUE << _name << " attacks with their " << _weapon->getType() << RESET << std::endl;
    else 
        std::cout << RED << "no weapon" << RESET << std::endl;
}