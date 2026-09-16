#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contacts.hpp"

#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define GREEN	"\033[32m"
#define RED		"\033[31m"
#define RESET	"\033[0m"

class PhoneBook
{
	private:
		static const int _MAX_CTTS = 8;
		Contact _contacts[_MAX_CTTS];
		int	_contactCount;

	public:
		PhoneBook();
		~PhoneBook();
		void addContact();
		void searchContact();
};

#endif