/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:32:58 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/17 19:37:57 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *hord;
	int n = 5;

	hord = zombieHorde(n, "Walker");

	for (int i = 0; i < n; i++)
	{
		std::cout << YELLOW << "index: " << i << " " << RESET;
		hord[i].announce();
	}
	delete[] hord;
	
	return (0);
}