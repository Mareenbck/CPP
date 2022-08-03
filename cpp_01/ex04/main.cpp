/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 09:07:07 by mbascuna          #+#    #+#             */
/*   Updated: 2022/08/03 15:16:19 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int	main(int ac, char **av)
{
	if (ac != 4 || !av[1][0] || !av[2][0] || !av[3][0])
	{
		std::cout << "Error with the arguments" << std::endl;
		return (1);
	}

	std::ifstream   tmp(av[1]);
	if (!tmp.is_open())
	{
		std::cout << "Error opening infile!" << std::endl;
		return (1);
	}
	char buffer;
	if (!tmp.get(buffer))
	{
		std::cout << "Nothing to read : Empty file" << std::endl;
		tmp.close();
		return (1);
	}
	tmp.close();
	std::ifstream   ifs(av[1]);
	if (!ifs.is_open())
	{
		std::cout << "Error opening infile!" << std::endl;
		return (1);
	}
	std::string	output = (std::string)av[1] + ".replace";
	std::ofstream	ofs(output.c_str());
	if (!ofs.is_open())
	{
		std::cout << "Error creating outfile!" << std::endl;
		return (1);
	}

	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string	line;
	size_t	pos = 0;
	while (std::getline(ifs, line, char(ifs.eof())))
	{
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		ofs << line;
	}
	ofs.close();
	ifs.close();

	return (0);
}
