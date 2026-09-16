#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	_contactCount = 0;
}
PhoneBook::~PhoneBook(){}

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
	if (_contactCount == 0)
	{
		std::cout << RED << "\nThe PhoneBook is empty!" << RESET << std::endl;
		return ;
	}
	std::cout << BLUE
			  << "\n___________________________SEARCH___________________________"
			  << RESET << std::endl;

	std::cout << std::setw(10) << "INDEX" << "|"
			  << std::setw(10) << "FIRST NAME" << "|"
			  << std::setw(10) << "LAST NAME" << "|"
			  << std::setw(10) << "NICKNAME"
			  << std::endl;

	std::cout << "---------------------------------------------" << std::endl;

	for (int i = 0; i < _contactCount; i++)
	{
		std::string firstName = _contacts[i].getFirstName();
		std::string lastName = _contacts[i].getLastName();
		std::string nickName = _contacts[i].getNickName();

		if (firstName.length() > 10)
			firstName = firstName.substr(0, 9) + ".";

		if (lastName.length() > 10)
			lastName = lastName.substr(0, 9) + ".";

		if (nickName.length() > 10)
			nickName = nickName.substr(0, 9) + ".";
		std::cout << std::setw(10) << i << "|" << std::setw(10) << firstName << "|" 
				<< std::setw(10) << lastName << "|"
				<< std::setw(10) << nickName << std::endl;
	}
	std::string input;
	while (true)
	{
		std::cout << "\nSelect contact index: ";
		if (!std::getline(std::cin, input))
		{
			std::cout << std::endl;
			return ;
		}
		if (input.length() != 1 || input[0] < '0' || input[0] > '7')
		{
			std::cout << RED << "Invalid index!" << RESET << std::endl;
			continue;
		}
		int index = input[0] - '0';
		if (index >= _contactCount)
		{
			std::cout << RED << "Contact does not exist!" << RESET << std::endl;
			continue;
		}
		std::cout << "\nFirst name: " << _contacts[index].getFirstName() << std::endl;
		std::cout << "Last name: " << _contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << _contacts[index].getNickName() << std::endl;
		std::cout << "Phone number: " << _contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << _contacts[index].getDarkestSecret() << std::endl;
		break;
	}
}
