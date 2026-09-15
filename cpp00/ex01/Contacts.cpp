#include "Contacts.hpp"

Contact::Contact(){};
Contact::~Contact(){};

void Contact::setFistName(const std::string &_firstName)
{
	this->_firstName = _firstName;
};
void Contact::setLastName(const std::string &_lastName)
{
	this->_lastName = _lastName;
};
void Contact::setNickName(const std::string &_nickName)
{
	this->_nickName = _nickName;
};
void Contact::setPhoneNumber(const std::string &_phoneNumber)
{
	this->_phoneNumber = _phoneNumber;
};
void Contact::setDarkestSecret(const std::string &_darkestSecret)
{
	this->_darkestSecret = _darkestSecret;
};

std::string Contact::getFistName() const{
	return _firstName;
};
std::string Contact::getLastName() const{
	return _lastName;
};
std::string Contact::getNickName() const{
	return _nickName;
};
std::string Contact::getPhoneNumber() const{
	return _phoneNumber;
};
std::string Contact::getDarkestSecret() const{
	return _darkestSecret;
};