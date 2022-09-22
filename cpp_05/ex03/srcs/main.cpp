/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:30:31 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/22 10:28:03 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << "****************************" << std::endl;
	std::cout << "*   CREATING BUREAUCRATS   *" << std::endl;
	std::cout << "****************************" << std::endl;
	Bureaucrat Emma("Emma", 25);
	std::cout << Emma;
	Bureaucrat Vikto("Vikto", 2);
	std::cout << Vikto;
	Bureaucrat Mehdi("Mehdi", 145);
	std::cout << Mehdi;
	std::cout << std::endl;
	std::cout << "**************************" << std::endl;
	std::cout << "*   INTERNS MAKE FORMS   *" << std::endl;
	std::cout << "**************************" << std::endl;
	Intern	someRandomIntern;
	AForm	*rrf;
	AForm	*scf;
	AForm	*ppf;
	AForm	*badForm;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	scf = someRandomIntern.makeForm("shrubbery creation", "garden");
	ppf = someRandomIntern.makeForm("presidential pardon", "Fanny");
	try
	{
		badForm = someRandomIntern.makeForm("random form", "Jeanne");
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;;
	}
	std::cout << std::endl;
	std::cout << "***********************************" << std::endl;
	std::cout << "*   SIGN & EXECUTE Presidential   *" << std::endl;
	std::cout << "***********************************" << std::endl;
	std::cout << "\033[0;32m*Execute Form*\033[0m" << std::endl;
	Vikto.executeForm(*ppf);
	std::cout << "\033[0;32m*Sign Form*\033[0m" << std::endl;
	Vikto.signForm(*ppf);
	std::cout << *ppf;
	std::cout << "\033[0;32m*Execute Form*\033[0m" << std::endl;
	Vikto.executeForm(*ppf);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "********************************" << std::endl;
	std::cout << "*   SIGN & EXECUTE Shrubbery   *" << std::endl;
	std::cout << "********************************" << std::endl;
	std::cout << "\033[0;32m*Execute Form*\033[0m" << std::endl;
	Emma.executeForm(*scf);
	std::cout << "\033[0;32m*Sign Form*\033[0m" << std::endl;
	Emma.signForm(*scf);
	std::cout << *scf;
	std::cout << "\033[0;32m*Execute Form*\033[0m" << std::endl;
	Emma.executeForm(*scf);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "********************************" << std::endl;
	std::cout << "*   SIGN & EXECUTE Robotomy   *" << std::endl;
	std::cout << "********************************" << std::endl;
	std::cout << "\033[0;32m*Execute Form*\033[0m" << std::endl;
	Mehdi.executeForm(*rrf);
	std::cout << "\033[0;32m*Sign Form*\033[0m" << std::endl;
	Mehdi.signForm(*rrf);
	std::cout << *rrf;
	std::cout << "\033[0;32m*Execute Form*\033[0m" << std::endl;
	Mehdi.executeForm(*rrf);
	std::cout << std::endl;
	delete rrf;
	delete ppf;
	delete scf;
}
