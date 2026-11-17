/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 20:21:52 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/21 20:03:01 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    this->_type = type;
}

Weapon::~Weapon(){}

void Weapon::setType(std::string newType){
    this->_type = newType;
}

const std::string &Weapon::getType() const{
    return (_type);    
}
