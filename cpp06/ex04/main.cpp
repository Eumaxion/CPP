/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 21:18:11 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/21 22:02:23 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define GREEN	"\033[32m"
#define RED		"\033[31m"
#define RESET	"\033[0m"

std::string ft_replace(std::string line, std::string s1, std::string s2)
{
	std::string result;
	std::size_t pos = 0;
	std::size_t found;

	found = line.find(s1, pos);
	while (found != std::string::npos)
	{
		result += line.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
		found = line.find(s1, pos);
	}
	result += line.substr(pos);
	return result;
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << YELLOW << "Invalid number of arguments!" << RESET << std::endl;
		std::cerr << YELLOW << "usage: ./ft_sed source_file s1 s2." << RESET << std::endl;
		return (1);
	}
	std::string file = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty())
	{
		std::cerr << RED << "Error: s1 can't be empty" << RESET << std::endl;
		return (1);
	}
	std::ifstream sourceFile(file.c_str());
	if (!sourceFile)
	{
		std::cerr << RED << "Error: can't open the source file." << RESET << std::endl;
		return (1);
	}
	std::ofstream outfile((file + ".replace").c_str());
	if (!outfile)
	{
		std::cerr << RED << "Error: can't create output file." << RESET << std::endl;
		return (1);
	}
	std::string line;
	while (std::getline(sourceFile, line))
	{
		line = ft_replace(line, s1, s2);
		outfile << line << std::endl;
	}
	std::cout << GREEN << "Success :)!!!" << RESET << std::endl;
	return (0);
}