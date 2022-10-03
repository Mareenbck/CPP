/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:04:44 by mbascuna          #+#    #+#             */
/*   Updated: 2022/10/03 14:05:01 by mbascuna         ###   ########.fr       */
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
	int myints[] = {16, 2, 77, 29};
	std::vector<int> v1(myints, myints + sizeof(myints) / sizeof(int));
	for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	v1.push_back(87);
	for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	v1.pop_back();
	for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "Try to find : 2" << std::endl;
	std::cout << *easyfind(v1, 2) << std::endl;
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
	int myints[] = {16, 2, 77, 29};
	std::list<int> l1(myints, myints + sizeof(myints) / sizeof(int));
	std::cout << "The contents of fifth are: ";
	for (std::list<int>::iterator it = l1.begin(); it != l1.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;
	l1.push_back(87);
	for (std::list<int>::iterator it = l1.begin(); it != l1.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	l1.pop_back();
	for (std::list<int>::iterator it = l1.begin(); it != l1.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << "Try to find : 2" << std::endl;
	std::cout << *easyfind(l1, 2) << std::endl;
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
	// std::cout << *easyfind(tabint, 42) << std::endl;

	// try
	// {
	// 	std::cout << *easyfind(tabint, 42) << std::endl;
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	return 0;
}
