/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:38:34 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/20 09:14:04 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreation", 145, 137), _target("Default")
{
	std::cout << "Shrubbery Default Constructor :\033[0;34m " << this->_target << " - Grade execute : " << AForm::getGradeToExecute() << " - Grade sign : " << AForm::getGradeToSign() << "\033[0m" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 145, 137), _target(target)
{
	std::cout << "Shrubbery Constructor :\033[0;34m " << this->_target << " - Grade execute : " << AForm::getGradeToExecute() << " - Grade sign : " << AForm::getGradeToSign() << "\033[0m" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
	this->_target = src.getTarget();
	std::cout << "Shrubbery Copy Constructor :\033[0;34m " << this->_target << " - Grade execute : " << AForm::getGradeToExecute() << " - Grade sign : " << AForm::getGradeToSign() << "\033[0m" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Shrubbery Destructor : \033[0;35m " << AForm::getName() << " \033[0m" << std::endl;
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->_target = rhs.getTarget();
	// this->_gradeToExecute = src.getGradeToExecute();
	// this->_gradeToExecute = rhs.getGradeToSign();
	return *this;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string	tree =
	"\033[0;32m        a@@@@a        \n"
	"    a@@@@@@@@@@@@a    \n"
	"  a@@@@@@by@@@@@@@@a  \n"
	"a@@@@@S@C@E@S@W@@@@@@a\n"
	"@@@@@@@@@@@@@@@@@@@@@@\n"
	" `@@@@@@`\\\\//'@@@@@@' \n"
	"          ||          \n"
	"          ||          \n"
	"          ||          \n"
	"          ||          \n"
	"          ||          \n"
	"         /MM\\        \033[0m\n"
	"~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::string	o = this->_target + "_shrubbery";
	if (!this->getSign())
		throw AForm::UnsignedFormException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
	{
		std::ofstream	ofs(o.c_str());
		if (!ofs.is_open())
		{
			std::cout << "Error creating outfile!" << std::endl;
			return ;
		}
		ofs << tree;
	}

}
