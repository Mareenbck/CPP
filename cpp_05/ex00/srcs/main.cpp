/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:30:31 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/15 15:37:10 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void constructorTests(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.CONSTRUCTORS.\033[0m" << std::endl;
	Bureaucrat Emma;
	Bureaucrat Vikto("Vitko", 2);
	Bureaucrat Fanny(Vikto);

	std::cout << std::endl;
	std::cout << Emma;
	std::cout << Vikto;
	std::cout << Fanny;
	std::cout << std::endl;
}

void validTests(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.VALID.\033[0m" << std::endl;
	Bureaucrat Mehdi("Mehdi", 1);
	std::cout << std::endl;
	std::cout << "\033[0;32m*Degrade*\033[0m" << std::endl;
	try
	{
		Mehdi.degrade();
	}
	catch (const Bureaucrat::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << Mehdi;
	std::cout << "\033[0;32m*Promote*\033[0m" << std::endl;
	try
	{
		Mehdi.promote();
	}
	catch (const Bureaucrat::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << Mehdi;
	std::cout << std::endl;
}

void badGradeTests(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.BAD GRADE.\033[0m" << std::endl;
	std::cout << "\033[0;32m*Grade 154*\033[0m" << std::endl;
	try
	{
		Bureaucrat Emma("Emma", 154);
	}
	catch (const Bureaucrat::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\033[0;32m*Grade -10*\033[0m" << std::endl;
	try
	{
		Bureaucrat Dieu("Fanny", -10);
	}
	catch (const Bureaucrat::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void badIncrement(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.BAD INCREMENT.\033[0m" << std::endl;
	Bureaucrat Fanny("Fanny", 1);
	std::cout << Fanny;
	std::cout << "\033[0;32m*Promote*\033[0m" << std::endl;
	try
	{
		Fanny.promote();
	}
	catch (const Bureaucrat::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	Bureaucrat Jeanne("Jeanne", 150);
	std::cout << Jeanne;
	std::cout << "\033[0;32m*Degrade*\033[0m" << std::endl;
	try
	{
		Jeanne.degrade();
	}
	catch (const Bureaucrat::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

int main(void)
{
	constructorTests();
	validTests();
	badGradeTests();
	badIncrement();
}
