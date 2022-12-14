/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:39:26 by mbascuna          #+#    #+#             */
/*   Updated: 2022/08/01 09:39:28 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
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
			std::cout << "\033[1;31m Can't be empty\033[0m" << std::endl;
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
