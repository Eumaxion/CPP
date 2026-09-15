#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	_contactCount = 0;
}
PhoneBook::~PhoneBook(){}

void PhoneBook::addContact(){};

void PhoneBook::searchContact()
{
	if (_contactCount < 1)
	{
		std::cout << RED << "\nThe PhoneBook is empty;\n" << RESET << std::endl;
		return ;
	}
	std::cout << YELLOW << "\nSelect the contact by index: \n" << RESET << std::endl;
};