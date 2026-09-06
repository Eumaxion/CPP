#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contacts.hpp"

#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define GREEN	"\033[32m"
#define RED		"\033[31m"
#define RESET	"\033[0m"


class Phonebook
{
	private:
	//attributess
		static const int _MAX_CTTS = 8;
		Contact _contacts[_MAX_CTTS];
		int	_contactCount;

	public:
	//constructor && destructor;
		Phonebook();
		~Phonebook();
	//methods
		void addContact();
		void searchContact();
};

#endif