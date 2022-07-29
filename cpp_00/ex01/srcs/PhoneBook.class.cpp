#include <iostream>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void){

	std::cout << "PhoneBook created" << std::endl;
	this->_index = 0;
	return ;
}

PhoneBook::~PhoneBook(void){

	std::cout << "Destructor called" << std::endl;
	return ;
}

Contact PhoneBook::get_contact(int index) const
{
	return (this->_book[index]);
}

void PhoneBook::addContact(void)
{
	if (_index > 7)
		std::cout << "Phonebook is full" << std::endl;
	else
		this->_book[_index++].set_contact();
	return;
}

void PhoneBook::print_contact(void)
{
	int i = 0;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (i < 8)
	{
		std::cout << _index;
		std::cout << this->_book[i].get_firstname();
		std::cout << this->_book[i].get_lastname();
		std::cout << this->_book[i].get_nickname();
		i++;
	}
}

void PhoneBook::searchContact(void)
{
	// if (_book[0].is_empty())
	// {
	// 	std::cout << "Phinebbok is empty" << std::endl;
	// 	return ;
	// }
	print_contact();

	std::cout << "SEARCH function" << std::endl;
	return;
}


