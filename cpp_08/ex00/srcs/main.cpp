/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:04:44 by mbascuna          #+#    #+#             */
/*   Updated: 2022/10/04 12:58:31 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <list>
#include "easyfind.hpp"

void vectorTests(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.Vector Tests.\033[0m" << std::endl;
	int myints[] = {16, 2, 77, 29};
	std::vector<int> v1(myints, myints + sizeof(myints) / sizeof(int));
	std::cout <<"\033[0;34;2mVector : \033[0m";
	for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout <<"\033[0;32m**Push 87**\033[0m" << std::endl;
	v1.push_back(87);
	std::cout <<"\033[0;34;2mVector : \033[0m";
	for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout <<"\033[0;32m**Pop back**\033[0m" << std::endl;
	v1.pop_back();
	std::cout <<"\033[0;34;2mVector : \033[0m";
	for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl<< std::endl;
	std::cout << "Try to find : 2" << std::endl;
	std::cout << "  => " << *easyfind(v1, 2) << std::endl;
	try
	{
		std::cout << "Try to find : 42" << std::endl;
		std::cout << *easyfind(v1, 42) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}

void listTests(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.List Tests.\033[0m" << std::endl;
	int myints[] = {16, 2, 77, 29};
	std::list<int> l1(myints, myints + sizeof(myints) / sizeof(int));
	std::cout <<"\033[0;34;2mList : \033[0m";
	for (std::list<int>::iterator it = l1.begin(); it != l1.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;
	std::cout <<"\033[0;32m**Push 87**\033[0m" << std::endl;
	l1.push_back(87);
	std::cout <<"\033[0;34;2mList : \033[0m";
	for (std::list<int>::iterator it = l1.begin(); it != l1.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout <<"\033[0;32m**Pop back**\033[0m" << std::endl;
	l1.pop_back();
	std::cout <<"\033[0;34;2mList : \033[0m";
	for (std::list<int>::iterator it = l1.begin(); it != l1.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl<< std::endl;
	std::cout << "Try to find : 2" << std::endl;
	std::cout << "  => " << *easyfind(l1, 2) << std::endl;
	try
	{
		std::cout << "Try to find : 42" << std::endl;
		std::cout << *easyfind(l1, 42) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	vectorTests();
	listTests();
	std::cout << std::endl;
	return 0;
}
