/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 19:42:29 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/17 19:42:30 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <new>
# include <iostream>

#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define GREEN	"\033[32m"
#define RED		"\033[31m"
#define RESET	"\033[0m"

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce( void );
		void setName(std::string name);
};

	Zombie* zombieHorde( int N, std::string name );

#endif