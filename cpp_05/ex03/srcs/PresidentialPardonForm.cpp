/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:58:44 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/20 12:11:45 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialCreation", 25, 5), _target("Default")
{
	std::cout << "Presidential Default Constructor :\033[0;34m " << this->_target << " - Grade execute : " << AForm::getGradeToExecute() << " - Grade sign : " << AForm::getGradeToSign() << "\033[0m" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialCreation", 25, 5), _target(target)
{
	std::cout << "Presidential Constructor :\033[0;34m " << this->_target << " - Grade execute : " << AForm::getGradeToExecute() << " - Grade sign : " << AForm::getGradeToSign() << "\033[0m" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
	this->_target = src.getTarget();
	std::cout << "Presidential Copy Constructor :\033[0;34m " << this->_target << " - Grade execute : " << AForm::getGradeToExecute() << " - Grade sign : " << AForm::getGradeToSign() << "\033[0m" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Presidential Destructor : \033[0;35m " << AForm::getName() << " \033[0m" << std::endl;
	return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	this->_target = rhs.getTarget();
	return *this;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSign())
		throw AForm::UnsignedFormException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

AForm *PresidentialPardonForm::make(std::string formTarget)
{
	PresidentialPardonForm *a = new PresidentialPardonForm(formTarget);
	return a;
}
