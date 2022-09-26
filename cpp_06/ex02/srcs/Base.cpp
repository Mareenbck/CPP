/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:10:52 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/26 16:21:49 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base::~Base(void)
{
	return;
}

Base *generate(void)
{
	int rand;

	std::srand(time(0));
	rand = std::rand() % 3;

	switch (rand)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			return NULL;
	}
	return NULL;
}

void identify(Base* p)
{
	std::cout << "Pointeur : ";
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	std::cout << "Reference : ";
	try
	{
		(void) dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception & e)
	{
	}
	try
	{
		(void) dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception & e)
	{
	}
	try
	{
		(void) dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception & e)
	{
	}
}
