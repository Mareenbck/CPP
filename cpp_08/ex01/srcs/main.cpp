/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:39:10 by mbascuna          #+#    #+#             */
/*   Updated: 2022/10/03 16:08:02 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void mandatory_tests(void)
{
	Span sp = Span(5);

	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.Mandatory Tests.\033[0m" << std::endl;
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void fullSpan(void)
{
	std::srand(time(0));
	int num = 0;
	Span span = Span(20000);

	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.Full Tests.\033[0m" << std::endl;
	for (unsigned int i = 0; i <= span.getSize(); i++)
	{
		std::vector<int> v = span.getVect();
		num = std::rand()%100000;
		std::vector<int>::iterator it = find(v.begin(), v.end(), num);
		if (it == v.end())
			span.addNumber(num);
		i = span.getVect().size();
	}
	std::cout << "\033[0;34mSpan size : \033[0m" << span.getVect().size() << std::endl;
	std::cout << "\033[0;33;2mShortest span : \033[0m" << span.shortestSpan() << std::endl;
	std::cout << "\033[0;33;2mLongest span  : \033[0m" << span.longestSpan() << std::endl;
	try
	{
		span.addNumber(65);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void sameSpan(void)
{
	Span span = Span(2);

	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.Same Span.\033[0m" << std::endl;
	span.addNumber(21);
	span.addNumber(42);
	std::cout << "\033[0;34mSpan : \033[0m" << span << std::endl;
	std::cout << "\033[0;33;2mShortest span : \033[0m" << span.shortestSpan() << std::endl;
	std::cout << "\033[0;33;2mLongest span  : \033[0m" << span.longestSpan() << std::endl;
}

void emptySpan(void)
{
	Span span = Span();

	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.Empty Span.\033[0m" << std::endl;
	std::cout << "\033[0;34mSpan : \033[0m" << span << std::endl;
	try
	{
		std::cout << "\033[0;33;2mShortest span : \033[0m" << span.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "\033[0;33;2mLongest span  : \033[0m" << span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		span.addNumber(65);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void addIter(void)
{
	Span sp = Span(12);
	std::vector<int> v;

	for (int i = 1; i <= 10; i++)
		v.push_back(i);

	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.AddNumber Iterator Tests.\033[0m" << std::endl;
	sp.addNumber(3);
	sp.addNumber(42);
	std::cout << "\033[0;34mSpan : \033[0m" << sp;
	std::cout << "\033[0;34;2mVector : \033[0m";
	for (int i = 1; i < 10; i++)
		std::cout << v[i] << ", ";
	std::cout << std::endl << std::endl;
	sp.addNumber(v.begin(), v.end());
	std::cout << "\033[0;34mSpan : \033[0m" << sp << std::endl;
}

int main(void)
{
	mandatory_tests();
	sameSpan();
	emptySpan();
	fullSpan();
	addIter();

	return 0;
}
