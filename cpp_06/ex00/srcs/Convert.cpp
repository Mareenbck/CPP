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

Convert::Convert(std::string input) : _input(input), _isImpossible(false)
{
	try
	{
		this->_double = std::stod(_input);
	}
	catch(const std::exception& e)
	{
		this->_isImpossible = true;
	}

	std::cout << "Convert Constructor " << std::endl;
	return;
}

Convert::Convert(Convert const &src) : _input(src.getInput()), _isImpossible(false)
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
	this->_double = rhs._double;
	return *this;
}

std::string Convert::getInput(void) const
{
	return this->_input;
}

void Convert::toChar()
{
	std::cout << "char: ";
	if (_isImpossible || isnan(this->_double))
		std::cout << "impossible";
	else if (isprint(this->_double) == false)
		std::cout << "Non displayable";
	else
		std::cout << static_cast<char>(this->_double);
	std::cout << std::endl;
}

void Convert::toInt()
{
	std::cout << "int: ";
	if (_isImpossible || isnan(this->_double) || this->_double > INT_MAX)
		std::cout << "impossible" ;
	else std::cout << static_cast<int>(this->_double);
	std::cout << std::endl;
}

void Convert::toFloat()
{
	std::cout << "float: ";
	if (_isImpossible || isnan(this->_double) || this->_double > FLT_MAX)
		std::cout << "nanf";
	else
		std::cout << static_cast<float>(this->_double) << 'f';
	std::cout << std::endl;
}

void Convert::toDouble()
{
	std::cout << "double: ";
	if (_isImpossible || isnan(this->_double))
		std::cout << "nan";
	else
		std::cout << static_cast<double>(this->_double);
	std::cout << std::endl;
}

const char *Convert::ImpossibleException::what() const throw()
{
	return ("impossible");
}

const char *Convert::NotDisplayableException::what() const throw()
{
	return ("Non displayable");
}
