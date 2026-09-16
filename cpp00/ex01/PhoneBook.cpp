#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	_contactCount = 0;
}
PhoneBook::~PhoneBook(){}

std::string getInput(std::string message)
{
    std::string input;

    while (input.empty())
    {
        std::cout << message;
        std::getline(std::cin, input);

        if (std::cin.eof())
            return "";
    }

    return input;
}

void PhoneBook::addContact()
{
    Contact newContact;
    std::string input;

    std::cout << BLUE << "\n_________ADD CONTACT_________" << RESET << std::endl;

    while (true)
    {
        std::cout << "First name: ";
        if (!std::getline(std::cin, input))
        {
            std::cout << std::endl;
            return ;
        }
        if (!input.empty())
            break;
        std::cout << RED << "First name cannot be empty!" << RESET << std::endl;
    }
    newContact.setFirstName(input);

    while (true)
    {
        std::cout << "Last name: ";
        if (!std::getline(std::cin, input))
        {
            std::cout << std::endl;
            return ;
        }
        if (!input.empty())
            break;
        std::cout << RED << "Last name cannot be empty!" << RESET << std::endl;
    }
    newContact.setLastName(input);

    while (true)
    {
        std::cout << "Nickname: ";
        if (!std::getline(std::cin, input))
        {
            std::cout << std::endl;
            return ;
        }
        if (!input.empty())
            break;
        std::cout << RED << "Nickname cannot be empty!" << RESET << std::endl;
    }
    newContact.setNickName(input);

    while (true)
    {
        std::cout << "Phone number: ";
        if (!std::getline(std::cin, input))
        {
            std::cout << std::endl;
            return ;
        }
        if (!input.empty())
            break;
        std::cout << RED << "Phone number cannot be empty!" << RESET << std::endl;
    }
    newContact.setPhoneNumber(input);

    while (true)
    {
        std::cout << "Darkest secret: ";
        if (!std::getline(std::cin, input))
        {
            std::cout << std::endl;
            return ;
        }
        if (!input.empty())
            break;
        std::cout << RED << "Darkest secret cannot be empty!" << RESET << std::endl;
    }
    newContact.setDarkestSecret(input);

    if (_contactCount < _MAX_CTTS)
    {
        _contacts[_contactCount] = newContact;
        _contactCount++;
    }
    else
    {
        for (int i = 0; i < _MAX_CTTS - 1; i++)
            _contacts[i] = _contacts[i + 1];

        _contacts[_MAX_CTTS - 1] = newContact;
    }

    std::cout << GREEN << "\nContact successfully added!" << RESET << std::endl;
}

void PhoneBook::searchContact()
{
	if (_contactCount < 1)
	{
		std::cout << RED << "\nThe PhoneBook is empty;\n" << RESET << std::endl;
		return ;
	}
	std::cout << YELLOW << "\nSelect the contact by index: \n" << RESET << std::endl;
	

};
