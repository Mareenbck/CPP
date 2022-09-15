/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:32:45 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/15 15:46:44 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("generic"), _grade(150)
{
	std::cout << "Constructor :\033[0;34m " << this->_name << "\033[0m" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Constructor :\033[0;34m " << this->_name << "\033[0m" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName()), _grade(src.getGrade())
{
	// *this = src;
	std::cout << "Copy Constructor :\033[0;34m " << this->_name << "\033[0m" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor : \033[0;35m "<< this->_name <<" \033[0m" << std::endl;
	return;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	// this->_name = rhs.getName();
	this->_grade = rhs.getGrade();

	return *this;
}

std::string const &Bureaucrat::getName(void) const
{
	return this->_name;
}

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}
