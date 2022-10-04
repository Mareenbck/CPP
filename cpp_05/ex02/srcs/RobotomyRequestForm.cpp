/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:27:28 by mbascuna          #+#    #+#             */
/*   Updated: 2022/10/04 13:38:54 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequest", 72, 45), _target("Default")
{
	std::cout << "Robotomy Default Constructor :\033[0;34m " << this->_target << " - Grade execute : " << AForm::getGradeToExecute() << " - Grade sign : " << AForm::getGradeToSign() << "\033[0m" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequest", 72, 45), _target(target)
{
	std::cout << "Robotomy Constructor :\033[0;34m " << this->_target << " - Grade execute : " << AForm::getGradeToExecute() << " - Grade sign : " << AForm::getGradeToSign() << "\033[0m" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute()), _target(src.getTarget())
{
	// *this = src;
	std::cout << "Robotomy Copy Constructor :\033[0;34m " << this->_target << " - Grade execute : " << AForm::getGradeToExecute() << " - Grade sign : " << AForm::getGradeToSign() << "\033[0m" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Robotomy Destructor : \033[0;35m " << AForm::getName() << " \033[0m" << std::endl;
	return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->_target = rhs.getTarget();
	return *this;
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSign())
		throw AForm::UnsignedFormException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout << "🔩 BzzZBzZZZzzzBzzzz 🔩" << std::endl;
	std::srand(time(0));
	int i = std::rand()%100;
	if (i % 2)
		std::cout << "🤖 Success : " << this->_target << " has been robotomized !!" << std::endl;
	else
		std::cout << "👶 Failure : " << this->_target << " robotomization failed !!" << std::endl;
}
