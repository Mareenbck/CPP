/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:30:31 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/20 12:31:54 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void constructorShrubberyTests(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.ShrubberyCreationForm CONSTRUCTORS.\033[0m" << std::endl;
	ShrubberyCreationForm a;
	ShrubberyCreationForm b("garden");
	ShrubberyCreationForm c(b);

	std::cout << std::endl;
	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << std::endl;
}

void constructorRobotomyTests(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.RobotomyRequestForm CONSTRUCTORS.\033[0m" << std::endl;
	RobotomyRequestForm a;
	RobotomyRequestForm b("baby");
	RobotomyRequestForm c(b);

	std::cout << std::endl;
	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << std::endl;
}

void constructorPresidentialTests(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.PresidentialPardonForm CONSTRUCTORS.\033[0m" << std::endl;
	PresidentialPardonForm a;
	PresidentialPardonForm b("Frootch");
	PresidentialPardonForm c(b);

	std::cout << std::endl;
	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << std::endl;
}

void shrubberyTests(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.SHRUBERRY.\033[0m" << std::endl;
	Bureaucrat Mehdi("Mehdi", 15);
	ShrubberyCreationForm a("garden");
	std::cout << std::endl;
	std::cout << Mehdi;
	std::cout << a;
	std::cout << std::endl;
	std::cout << "\033[0;32m*Execute Form*\033[0m" << std::endl;
	Mehdi.executeForm(a);
	std::cout << "\033[0;32m*Sign Form*\033[0m" << std::endl;
	Mehdi.signForm(a);
	std::cout << a;
	std::cout << "\033[0;32m*Execute Form*\033[0m" << std::endl;
	Mehdi.executeForm(a);
	std::cout << std::endl;
}

void robotomyTests(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.ROBOTOMY.\033[0m" << std::endl;
	Bureaucrat Emma("Emma", 15);
	RobotomyRequestForm a("baby");
	std::cout << std::endl;
	std::cout << Emma;
	std::cout << a;
	std::cout << std::endl;
	std::cout << "\033[0;32m*Execute Form*\033[0m" << std::endl;
	Emma.executeForm(a);
	std::cout << "\033[0;32m*Sign Form*\033[0m" << std::endl;
	Emma.signForm(a);
	std::cout << a;
	std::cout << "\033[0;32m*Execute Form*\033[0m" << std::endl;
	Emma.executeForm(a);
	std::cout << std::endl;
}

void presidentialTests(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.PRESIDENTIAL.\033[0m" << std::endl;
	Bureaucrat Vikto("Vikto", 2);
	PresidentialPardonForm a("Frootch");
	std::cout << std::endl;
	std::cout << Vikto;
	std::cout << a;
	std::cout << std::endl;
	std::cout << "\033[0;32m*Execute Form*\033[0m" << std::endl;
	Vikto.executeForm(a);
	std::cout << "\033[0;32m*Sign Form*\033[0m" << std::endl;
	Vikto.signForm(a);
	std::cout << a;
	std::cout << "\033[0;32m*Execute Form*\033[0m" << std::endl;
	Vikto.executeForm(a);
	std::cout << std::endl;
}

void InternTests(void)
{
	Intern	someOne;
	AForm*	rrf;

	rrf = someOne.makeForm("robotomy request", "Bender");
}

int main(void)
{
	// constructorShrubberyTests();
	// shrubberyTests();
	// constructorRobotomyTests();
	// robotomyTests();
	// constructorPresidentialTests();
	// presidentialTests();
	InternTests();
}
