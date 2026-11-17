/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:45:10 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/23 19:25:23 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#include <iostream>

int main()
{
	Animal *dog = new Dog();
	Animal *cat = new Cat();
	std::cout << "Dog type: " << dog->getType() << std::endl;
	std::cout << "Cat type: " << cat->getType() << std::endl;
	dog->makeSound();
	cat->makeSound();
	delete dog;
	delete cat;
	std::cout << std::endl;
	const int size = 6;

	Animal *animals[size];

	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();
	for (int i = 0; i < size; i++)
	{
		std::cout << "Animal[" << i << "] type: " << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}
	std::cout << std::endl;
	std::cout << "Deleting array..." << std::endl;
	for (int i = 0; i < size; i++)
		delete animals[i];
	std::cout << std::endl;
	Dog dog1;
	Dog dog2(dog1);
	Dog dog3;
	dog3 = dog1;

	std::cout << "dog1 type: " << dog1.getType() << std::endl;
	std::cout << "dog2 type: " << dog2.getType() << std::endl;
	std::cout << "dog3 type: " << dog3.getType() << std::endl;
	dog1.makeSound();
	dog2.makeSound();
	dog3.makeSound();
	std::cout << std::endl;
	Cat cat1;
	Cat cat2(cat1);
	Cat cat3;
	cat3 = cat1;

	std::cout << "cat1 type: " << cat1.getType() << std::endl;
	std::cout << "cat2 type: " << cat2.getType() << std::endl;
	std::cout << "cat3 type: " << cat3.getType() << std::endl;
	cat1.makeSound();
	cat2.makeSound();
	cat3.makeSound();
	
	std::cout << std::endl;
	Dog original;
	std::cout << "Creating a copy of the Dog..." << std::endl;
	Dog copy(original);
	std::cout << "Original and copy are separate objects." << std::endl;
	std::cout << std::endl;
	return 0;
}