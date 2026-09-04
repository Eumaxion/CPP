#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class Contacts
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
	public:
		void setFirstName(std::string firstName);
		std::string getFirstName(void);
/*   It has an array of contacts.
	◦ It can store a maximum of 8 contacts. If the user tries to add a 9th contact,
	replace the oldest one by the new one.
	◦ Please note that dynamic allocation is forbidden.
	The contact fields are: 
		first name
		last name
		nickname
		phone number
		darkest secret. 
		
	ADD()
	SEARCH()
	EXIT()
	• Any other input is ignored
	*/
}

#endif