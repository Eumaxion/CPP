#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	pb;
	std::string	cmd;
	while (1)
	{
		std::cout << BLUE << "\n_________PhoneBook_________" << RESET << std::endl;
		std::cout << "\nOPTIONS: ADD, SEARCH, EXIT" << std::endl;
		std::cout << "Insert your command: ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break;
		}
		else if (cmd.empty())
			continue;
		if (cmd.compare("EXIT") == 0)
		{
			std::cout << GREEN << "\nThanks for using my PhoneBook!!!\n" << RESET << std:: endl;
			return (0);
		}
		else if (cmd.compare("ADD") == 0)
			pb.addContact();
		else if (cmd.compare("SEARCH") == 0)
			pb.searchContact();
		else
			std::cout << RED << "Invalid command!\n" << RESET << std::endl;
	}
	return (0);
} 