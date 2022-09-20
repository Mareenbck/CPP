/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:32:17 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/20 12:31:36 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Default Constructor" << std::endl;

}

Intern::Intern(Intern const &src)
{
	*this = src;
	std::cout << "Intern Copy Constructor " << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Intern Destructor " << std::endl;
	return ;
}

Intern &Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return *this;
}

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string formTab[3] = {"shrubbery request", "robotomy request", "presidential request"};
	AForm *(Intern::*f[3])(std::string) = {&Intern::newShrubbery, &Intern::newRobotomy, &Intern::newPresidential };

	int i = 0;
	while (formName.compare(formTab[i]))
		i++;
	return (this->*f[i])(formTarget);
}

AForm	*Intern::newShrubbery(std::string target) {

	return new ShrubberyCreationForm(target);
}

AForm	*Intern::newRobotomy(std::string target) {

	return new RobotomyRequestForm(target);
}

AForm	*Intern::newPresidential(std::string target) {

	return new PresidentialPardonForm(target);
}
