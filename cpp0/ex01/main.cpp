#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	pb;
	std::string	cmd;
	while (1)
	{
		std::cout << BLUE << "\n_________PHONEBOOK_________" << RESET << std::endl;
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
		if (cmd == "EXIT")
		{
			std::cout << GREEN << "\nThanks for using my awesome Phonebook!!!\n" << RESET << std:: endl;
			return (0);
		}
		else if (cmd == "ADD")
			pb.addContact();
		else if (cmd == "SEARCH")
			pb.searchContact();
		else
		{
			std::cout << RED << "Invalid command!\n" << RESET << std::endl;
		}
	}
	return (0);
}