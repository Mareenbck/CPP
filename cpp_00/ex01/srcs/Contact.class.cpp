#include <iostream>
#include <stdlib.h>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

Contact::Contact(void)
{
	std::cout << "Contact created" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

std::string	Contact::get_firstname(void)
{
	return (this->_firstname);
}

std::string	Contact::get_lastname(void)
{
	return (this->_lastname);
}

std::string	Contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string	Contact::get_phoneNumber(void)
{
	return (this->_phoneNumber);
}

std::string	Contact::get_darkSecret(void)
{
	return (this->_darkSecret);
}

std::string Contact::input(std::string str)
{
	std::string tmp;

	while (tmp.empty())
	{
		std::cout << str << std::endl;
		if (std::getline(std::cin, tmp).eof())
			exit(0);
		if (tmp.empty())
			std::cout << "Can't be empty" << std::endl;
	}
	return (tmp);
}

void Contact::set_contact(void)
{
	this->_firstname = Contact::input("Enter first name");
	this->_lastname = Contact::input("Enter last name");
	this->_nickname = Contact::input("Enter nickname");
	this->_phoneNumber = Contact::input("Enter phone number");
	this->_darkSecret = Contact::input("Enter darkest secret");
	return ;
}
