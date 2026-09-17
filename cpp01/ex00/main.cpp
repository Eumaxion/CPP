/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:32:58 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/17 18:33:00 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = newZombie("Heap Zombie");
	zombie->announce();
	delete zombie;
	std::cout << "_________________________________________________" << std::endl;
	randomChump("Stack Zombie");

	return (0);
}	