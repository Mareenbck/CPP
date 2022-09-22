/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:26:27 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/22 17:48:15 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
{
	std::cout << "Convert Default Constructor " << std::endl;
	return;
}

Convert::Convert(std::string input) : _input(input)
{
	this->_char = 0;
	this->_int = 0;
	this->_float = 0;
	this->_double = 0;
	std::cout << "Convert Constructor " << std::endl;
	return;
}

Convert::Convert(Convert const &src) : __input(src.getInput())
{
	*this = src;
	std::cout << "Convert Copy Constructor " << std::endl;
}

Convert::~Convert(void)
{
	std::cout << "Convert Destructor " << std::endl;
	return;
}

Convert &Convert::operator=(Convert const &rhs)
{
	this->_input = rhs.getInput();
	return *this;
}

std::string Convert::getInput(void) const
{
	return this->_input;
}

bool Convert::isChar(void)
{
	if (this->_input.length() < 2)
	{
		if (this->_input[0] >= 48 && this->_input[0] <= 57)
			return false;
		return true;
	}
	return false;
}

bool Convert::isInt(void)
{
	int i = 0;

	if (this->_input[i] == '-' || this->_input[i] == '+')
		i++;
	for (; i < this->_input.length(); i++)
	{
		if (!isdigit(this->_input[i]))
			return false;
	}
	this->_toDouble = strtod(this->_input.c_str(), NULL);
	return true;
}

bool Convert::isFloat(void)
{
	int i = 0;
	if (this->_input[i] == '-' || this->_input[i] == '+')
		i++;
	for (; i < this->_input.length(); i++)
	{
		if (!isdigit(this->_input[i]) && this->_input[i] == ".")
		{
			i++;
			for (; i < this->_input.length(); i++)
			{
				if (!isdigit(this->_input[i]) && this->_input[i] != 'f')
					return false;
				else if (this->_input[i] == 'f' && this->_input[i + 1] != '\0')
					return false;
				else if (this->_input[i] == 'f' && this->_input[i + 1] == '\0')
					return true;
			}
		}
}
