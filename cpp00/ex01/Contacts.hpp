#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <string>
class Contact
{
	//Private attributess
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

	public:
	//constructor && destructor;
		Contact();
		~Contact();
	//Setters
		void setFistName(const std::string &_firstName);
		void setLastName(const std::string &_lastName);
		void setNickName(const std::string &_nickName);
		void setPhoneNumber(const std::string &_phoneNumber);
		void setDarkestSecret(const std::string &_darkestSecret);
	//Getters
		std::string getFistName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
};

#endif