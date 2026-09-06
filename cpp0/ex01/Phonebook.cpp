#include "Phonebook.hpp"

Phonebook::Phonebook(){
	_contactCount = 0;
}
Phonebook::~Phonebook(){}

void Phonebook::addContact(){};

void Phonebook::searchContact()
{
	if (_contactCount < 1)
	{
		std::cout << RED << "\nThe phonebook is empty;\n" << RESET << std::endl;
		return ;
	}
	std::cout << YELLOW << "\nSelect the contact by index: \n" << RESET << std::endl;
};