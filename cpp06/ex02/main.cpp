/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 19:42:09 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/17 20:20:32 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define GREEN	"\033[32m"
#define RED		"\033[31m"
#define RESET	"\033[0m"

int main (void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPRT = &string;
	std::string &stringREF = string;

	std::cout << std::endl;
	std::cout << BLUE << "The memory address of the string variable: "<< &string << RESET << std::endl;
	std::cout << GREEN << "The memory address held by stringPTR: " << stringPRT << RESET << std::endl;
	std::cout << YELLOW <<  "The memory address held by stringREF: " << &stringREF << RESET << std::endl;
	std::cout << std::endl;
	std::cout << BLUE << "The value of the string variable: " << string << RESET << std::endl;
	std::cout << GREEN <<  "The value pointed to by stringPTR: "<< *stringPRT << RESET << std::endl;
	std::cout << YELLOW << "The value pointed to by stringREF: " << stringREF << RESET << std::endl;
	std::cout << std::endl;

	return (0);
}
