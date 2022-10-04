/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:22:32 by mbascuna          #+#    #+#             */
/*   Updated: 2022/10/04 12:37:49 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

void mandatoryTests(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.pop();
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void intTests(void)
{
	MutantStack<int> mutant;

	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.<Int> Tests.\033[0m" << std::endl;
	std::srand(time(0));
	for (int i = 0; i < 15; i++)
		mutant.push(std::rand()%50);
	MutantStack<int>::iterator begin = mutant.begin();
	MutantStack<int>::iterator end = mutant.end();
	std::cout <<"\033[0;33mFull Stack : \033[0m" << std::endl;
	while (begin != end)
	{
		std::cout << *begin << ", ";
		begin++;
	}
	std::cout << std::endl << std::endl;
	std::cout <<"\033[0;34;2mTop element : \033[0m" << mutant.top() << std::endl;
	std::cout <<"\033[0;34;2mSize : \033[0m" << mutant.size() << std::endl;
	std::cout <<"\033[0;32m**PoP**\033[0m" << std::endl;
	mutant.pop();
	std::cout <<"\033[0;34;2mTop element : \033[0m" << mutant.top() << std::endl;
	std::cout <<"\033[0;34;2mSize : \033[0m" << mutant.size() << std::endl << std::endl;
	begin = mutant.begin();
	end = mutant.end();
	std::cout <<"\033[0;33mFull Stack : \033[0m" << std::endl;
	while (begin != end)
	{
		std::cout << *begin << ", ";
		begin++;
	}
	std::cout << std::endl << std::endl;
}

void charTests(void)
{
	MutantStack<char> mutant;

	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.<char> Tests.\033[0m" << std::endl;
	std::srand(time(0));
	for (int i = 0; i < 15; i++)
		mutant.push(std::rand()%90 + 42);
	MutantStack<char>::iterator begin = mutant.begin();
	MutantStack<char>::iterator end = mutant.end();
	std::cout <<"\033[0;33mFull Stack : \033[0m" << std::endl;
	while (begin != end)
	{
		std::cout << *begin << ", ";
		begin++;
	}
	std::cout << std::endl << std::endl;
	std::cout <<"\033[0;34;2mTop element : \033[0m" << mutant.top() << std::endl;
	std::cout <<"\033[0;34;2mSize : \033[0m" << mutant.size() << std::endl;
	std::cout <<"\033[0;32m**PoP**\033[0m" << std::endl;
	mutant.pop();
	std::cout <<"\033[0;34;2mTop element : \033[0m" << mutant.top() << std::endl;
	std::cout <<"\033[0;34;2mSize : \033[0m" << mutant.size() << std::endl << std::endl;
	begin = mutant.begin();
	end = mutant.end();
	std::cout <<"\033[0;33mFull Stack : \033[0m" << std::endl;
	while (begin != end)
	{
		std::cout << *begin << ", ";
		begin++;
	}
	std::cout << std::endl << std::endl;
}

void listTests(void)
{
	MutantStack<int> mutant;
	std::list<int> list;

	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.List Tests.\033[0m" << std::endl;
	std::srand(time(0));
	for (int i = 0; i < 15; i++)
	{
		int num = std::rand()%50;
		mutant.push(num);
		list.push_back(num);
	}
	MutantStack<int>::iterator begin = mutant.begin();
	MutantStack<int>::iterator end = mutant.end();
	std::list<int>::iterator beginL = list.begin();
	std::cout <<"\033[0;34m Mutant  |   List \033[0m" << std::endl;
	std::cout <<"\033[0;34m------------------\033[0m" << std::endl;

	while (begin != end)
	{
		if(*begin < 10)
			std::cout << "    ";
		else
			std::cout << "   ";
		std::cout << *begin << "    |  " << *beginL << std::endl;
		begin++;
		beginL++;
	}
}

void listConstTests(void)
{
	MutantStack<int> mutant;
	std::list<int> list;

	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.List Const Tests.\033[0m" << std::endl;
	std::srand(time(0));
	for (int i = 0; i < 15; i++)
	{
		int num = std::rand()%50;
		mutant.push(num);
		list.push_back(num);
	}
	MutantStack<int>::const_iterator begin = mutant.cbegin();
	MutantStack<int>::const_iterator end = mutant.cend();
	std::list<int>::const_iterator beginL = list.begin();
	std::cout <<"\033[0;34m Mutant  |   List \033[0m" << std::endl;
	std::cout <<"\033[0;34m------------------\033[0m" << std::endl;

	while (begin != end)
	{
		if(*begin < 10)
			std::cout << "    ";
		else
			std::cout << "   ";
		std::cout << *begin << "    |  " << *beginL << std::endl;
		begin++;
		beginL++;
	}
}

void listReverseTests(void)
{
	MutantStack<int> mutant;
	std::list<int> list;

	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.List Reverse Tests.\033[0m" << std::endl;
	std::srand(time(0));
	for (int i = 0; i < 15; i++)
	{
		int num = std::rand()%50;
		mutant.push(num);
		list.push_back(num);
	}
	MutantStack<int>::reverse_iterator begin = mutant.rbegin();
	MutantStack<int>::reverse_iterator end = mutant.rend();
	std::list<int>::reverse_iterator beginL = list.rbegin();
	std::cout <<"\033[0;34m Mutant  |   List \033[0m" << std::endl;
	std::cout <<"\033[0;34m------------------\033[0m" << std::endl;
	while (begin != end)
	{
		if(*begin < 10)
			std::cout << "    ";
		else
			std::cout << "   ";
		std::cout << *begin << "    |  " << *beginL << std::endl;
		begin++;
		beginL++;
	}
}

int main(void)
{
	// mandatoryTests();
	intTests();
	charTests();
	listTests();
	listConstTests();
	listReverseTests();
	return 0;
}
