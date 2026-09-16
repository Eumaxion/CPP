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
		void setFirstName(const std::string &firstName);
		void setLastName(const std::string &lastName);
		void setNickName(const std::string &nickName);
		void setPhoneNumber(const std::string &phoneNumber);
		void setDarkestSecret(const std::string &darkestSecret);
	//Getters
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
};

#endif