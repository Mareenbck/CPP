/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:26:27 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/26 13:55:02 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
{
	return;
}

Convert::Convert(std::string input) : _input(input)
{

	this->_double = std::strtod(this->_input.c_str(), NULL);
	if (isChar())
	{
		this->_int = static_cast<int>(this->_input[0]);
		this->_float = static_cast<float>(this->_input[0]);
		this->_double = static_cast<double>(this->_input[0]);
	}
	return;
}

Convert::Convert(Convert const &src) : _input(src.getInput())
{
	*this = src;
}

Convert::~Convert(void)
{
	return;
}

Convert &Convert::operator=(Convert const &rhs)
{
	this->_input = rhs.getInput();
	this->_double = rhs._double;
	return *this;
}

std::string Convert::getInput(void) const
{
	return this->_input;
}

bool	Convert::isChar() {

	if (this->_input.length() < 2)
	{
		if ((this->_input[0] >= '0' && this->_input[0] <= '9'))
			return false;
		return true;
	}
	return false;
}

void Convert::toChar()
{
	std::cout << "char: ";
	if (isnan(this->_double) || this->_double >= INT_MAX || this->_double <= INT_MIN || this->_double < 0)
		std::cout << "impossible";
	else if (!isprint(this->_input[0]) || (!isChar() && this->_input.length() < 2))
		std::cout << "Non displayable";
	else if (isChar())
		std::cout << "'" <<  this->_input[0] << "'";
	else
		std::cout << "'" <<  static_cast<char>(this->_double) << "'";
	std::cout << std::endl;
}

void Convert::toInt()
{
	std::cout << "int: ";
	if (isnan(this->_double) || this->_double > INT_MAX || this->_double < INT_MIN)
		std::cout << "impossible" ;
	else
		std::cout << static_cast<int>(this->_double);
	std::cout << std::endl;
}

void Convert::toFloat()
{
	std::cout << "float: ";
	if (isnan(this->_double) || this->_double > FLT_MAX || this->_double < INT_MIN)
		std::cout << "nanf";
	else
		std::cout << static_cast<float>(this->_double) << 'f';
	std::cout << std::endl;
}

void Convert::toDouble()
{
	std::cout << "double: ";
	if (isnan(this->_double))
		std::cout << "nan";
	else
		std::cout << static_cast<double>(this->_double);
	std::cout << std::endl;
}
