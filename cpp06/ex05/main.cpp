/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 22:02:50 by mlima-si          #+#    #+#             */
/*   Updated: 2026/09/21 22:25:21 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl;

	harl.complain("DEBUG");
	std::cout << std::endl << "--------------------------------" << std::endl;;
	harl.complain("INFO");
	std::cout << std::endl << "--------------------------------" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl << "--------------------------------" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl << "--------------------------------" << std::endl;
	harl.complain("SOMETHING_ELSE");
	std::cout << std::endl << "--------------------------------" << std::endl;

    return (0);
}