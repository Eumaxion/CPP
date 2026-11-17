/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:45:10 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/23 19:16:06 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		std::cout << std::endl;
		std::cout << YELLOW << "## TESTS FROM SUBJECT ##" << RESET << std::endl;
		const Animal* meta = new Animal();
		const Animal* j    = new Dog();
		const Animal* i    = new Cat();
		std::cout << j->getType() << std::endl;
		std::cout << i->getType() << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}
	{
		std::cout << std::endl;
		std::cout << YELLOW << "## MY TESTS ##" << RESET << std::endl;
		std::cout << std::endl << "=== Wrong classes (no virtual) ===" << std::endl;
	
		const WrongAnimal* wa = new WrongAnimal();
		const WrongAnimal* wc = new WrongCat();
		std::cout << wc->getType() << std::endl;
		wa->makeSound();
		wc->makeSound();
		
		delete wa;
		delete wc;
	}

	return 0;
}