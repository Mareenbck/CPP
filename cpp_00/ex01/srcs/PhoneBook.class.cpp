/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:39:43 by mbascuna          #+#    #+#             */
/*   Updated: 2022/08/02 18:17:33 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::addContact(void)
{
	if (_index > 7)
		_index = 0;
	else
		this->_book[_index++].set_contact();
	return;
}

std::string resize(std::string str, unsigned long size)
{
	if (str.size() > size)
	{
		str.resize(size);
		str[str.size() - 1] = '.';
	}
	else
	{
		while (str.size() < size--)
			std::cout << " ";
	}
	return (str);
}

void PhoneBook::print_all_contact(void)
{
	int i = 0;

	std::cout << "*-------------------------------------------*" << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while (i < 8 && !this->_book[i].get_firstname().empty())
	{
		std::cout << "|         " << i;
		std::cout << "|";
		std::cout << resize(this->_book[i].get_firstname(), 10);
		std::cout << "|";
		std::cout << resize(this->_book[i].get_lastname(), 10);
		std::cout << "|";
		std::cout << resize(this->_book[i].get_nickname(), 10);
		std::cout << "|";
		std::cout << std::endl;
		i++;
	}
	std::cout << "*-------------------------------------------*" << std::endl;
}

void PhoneBook::print_one_contact(Contact contact)
{
	std::cout << "\033[4;37mFirst Name:\033[0m " << contact.get_firstname() << std::endl;
	std::cout << "\033[4;37mLast Name:\033[0m " << contact.get_lastname() << std::endl;
	std::cout << "\033[4;37mNickname:\033[0m " << contact.get_nickname() << std::endl;
	std::cout << "\033[4;37mPhone Number:\033[0m " << contact.get_phoneNumber() << std::endl;
	std::cout << "\033[4;37mDarkest Secret:\033[0m " << contact.get_darkSecret() << std::endl;
}

void PhoneBook::searchContact(void)
{
	std::string input;

	if (this->_book[0].get_firstname().empty())
	{
		std::cout << "\033[0;31m>>> PhoneBook is empty\033[0m" << std::endl;
		return ;
	}
	print_all_contact();
	while (1)
	{
		std::cout << "\033[1;33mSelect an index ? or Q for quit\033[0m:" << "\n\033[0;35mNumber \033[0m: ";
		if (std::getline(std::cin, input).eof())
			exit(0);
		if (input[0] == 'Q')
			break ;
		else if (input[0] >= '8' || input[0] <= '0' || this->_book[input[0] - '0'].get_firstname().empty())
			std::cout << "\033[1;31m>>> Wrong input\033[0m:" << std::endl;
		else
		{
			print_one_contact(this->_book[input[0] - '0']);
			break ;
		}
	}
	std::cout << std::endl;
	return;
}


