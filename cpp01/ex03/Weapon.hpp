/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 20:22:09 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/17 21:07:07 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define GREEN	"\033[32m"
#define RED		"\033[31m"
#define RESET	"\033[0m"

class Weapon
{
	private:
		std::string type;
	public:
		Weapon::getType();
		Weapon::setType();

};

#endif