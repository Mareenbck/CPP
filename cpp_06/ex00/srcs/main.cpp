/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:57:04 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/26 13:59:37 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


bool	checkArg(std::string input)
{
	if (input.empty())
		return false;
	if (input.length() < 2)
		return true;
	if (input == "nan" || input == "nanf")
		return true;
	if (!isdigit(input[0]) && input[0] != '-' && input[0] != '+')
		return false;
	return true;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong number of argument" << std::endl;
		return (1);
	}
	if (!checkArg(argv[1]))
	{
		std::cerr << "Wrong input" << std::endl;
		return (1);
	}
	// std::cout << std::fixed;
	// std::cout.precision(1);
	char *target = argv[1];
	Convert convert(target);

	convert.toChar();
	convert.toInt();
	convert.toFloat();
	convert.toDouble();

	return (0);
}
