#include "PhoneBook.hpp"

int	main(int ac, char **av)
{
	PhoneBook	pb;
	std::string	cmd;
	while (1)
	{
		std::cout << "\nOPTIONS: ADD(), SEARCH(), EXIT()" << std::endl;
		std::cout << "Insert your command: ";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
		{
			std::cout << "Thanks for using my awesome PhoneBook!!!" << std:: endl;
			break;
		}
		else if (cmd == "ADD")
		{
			pb.addContact();
		}
		else if (cmd == "SEARCH")
		{
			pb.searchContact();
		}
		else
		{
			std::cout << "Invalid command!" << std::endl;
		}
	}
	return (0);
} 