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
#include "Form.hpp"

void constructorFormTests(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.FORM CONSTRUCTORS.\033[0m" << std::endl;
	Form a;
	Form b("A315", 5, 10);
	Form c(b);

	std::cout << std::endl;
	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << std::endl;
}

void validTests(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.VALID.\033[0m" << std::endl;
	Bureaucrat Mehdi("Mehdi", 1);
	Form a("A376", 5, 1);
	std::cout << std::endl;
	std::cout << Mehdi;
	std::cout << a;
	std::cout << std::endl;
	std::cout << "\033[0;32m*Sign Form*\033[0m" << std::endl;
	Mehdi.signForm(a);
	std::cout << a;
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
		Form a("A456", 154, 3);
	}
	catch (const Form::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\033[0;32m*Grade -10*\033[0m" << std::endl;
	try
	{
		Form b("B897", 3, -10);
	}
	catch (const Form::Exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void badIncrement(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.BAD SIGN FORMS.\033[0m" << std::endl;
	Bureaucrat Fanny("Fanny", 15);
	Form a("A376", 1, 1);
	std::cout << Fanny;
	std::cout << a;
	std::cout << "\033[0;32m*Sign KO*\033[0m" << std::endl;
	Fanny.signForm(a);
	std::cout << a;
	std::cout << std::endl;
	Bureaucrat Jeanne("Jeanne", 150);
	std::cout << Jeanne;
	std::cout << "\033[0;32m*Sign KO*\033[0m" << std::endl;
	Jeanne.signForm(a);
	std::cout << a;
	std::cout << std::endl;
	Form b("B265", 50, 50);
	std::cout << b;
	std::cout << "\033[0;32m*Sign OK*\033[0m" << std::endl;
	Fanny.signForm(b);
	std::cout << b;
	std::cout << std::endl;
}

int main(void)
{
	// constructorTests();
	constructorFormTests();
	validTests();
	badGradeTests();
	badIncrement();
}
