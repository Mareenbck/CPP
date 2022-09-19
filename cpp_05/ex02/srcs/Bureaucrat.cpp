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

#include "AForm.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("generic"), _grade(150)
{
	std::cout << "Default Constructor :\033[0;34m " << this->_name << " - Grade : " << this->_grade << "\033[0m" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
	std::cout << "Constructor :\033[0;34m " << this->_name << " - Grade : " << this->_grade << "\033[0m" << std::endl;
		return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName()), _grade(src.getGrade())
{
	// *this = src;
	std::cout << "Copy Constructor :\033[0;34m " << this->_name << " - Grade : " << this->_grade << "\033[0m" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor : \033[0;35m "<< this->_name <<" \033[0m" << std::endl;
	return;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
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

void Bureaucrat::promote(void)
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::degrade(void)
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch (AForm::Exception &e)
	{
		std::cout << this->_name << " couldn't signed " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " sucesfully executed " << form.getName() << std::endl;
	}
	catch (AForm::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return o;
}

const char *Bureaucrat::Exception::what() const throw()
{
	return ("BureaucratException");
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade Too High");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade Too Low");
}
