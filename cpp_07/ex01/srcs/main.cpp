/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:42:04 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/27 14:42:02 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main (void)
{
	int tab[] = {2, 5, 1};
	char stab[] = "Salut";

	std::cout << std::endl;
	std::cout << "******* TAB INT *******" << std::endl << std::endl;;
	iter(tab, 3, print<int>);
	iter(tab, 3, multi<int>);
	std::cout << std::endl << "multi >>  ";
	iter(tab, 3, print<int>);
	std::cout << std::endl << std::endl;
	std::cout << "******* STRING ********" << std::endl << std::endl;
	iter(stab, 5, print<char>);
	iter(stab, 5, upper<char>);
	std::cout << std::endl << "upper >>  ";
	iter(stab, 5, print<char>);
	std::cout << std::endl << std::endl;
	std::cout << "***********************" << std::endl << std::endl;

	return 0;
}
