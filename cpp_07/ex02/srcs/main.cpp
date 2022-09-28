/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:44:17 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/28 16:41:29 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	{
		std::cout << std::endl;
		std::cout << "------------------------------" << std::endl;
		std::cout << std::endl;
		std::cout << "\033[1m.Constructor Default.\033[0m" << std::endl;
		Array<int> array1;
		Array<char> array2;
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "------------------------------" << std::endl;
		std::cout << std::endl;
		std::cout << "\033[1m.Creating ARRAY.\033[0m" << std::endl;
		Array<int>	array1(5);
		Array<char>	array2(3);
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "------------------------------" << std::endl;
		std::cout << std::endl;
		std::cout << "\033[1m.Assignation value dans l'array.\033[0m" << std::endl;
		array1[0] = 42;
		array1[1] = 52;
		array1[2] = -56;
		array1[3] = 10;
		array1[4] = 663;
		std::cout << "\033[2m.Int.\033[0m" << std::endl;
		for (unsigned int i = 0; i < array1.getSize(); i++)
			std::cout << array1[i] << ", ";
		std::cout << std::endl;
		std::cout << "\033[0;32m*Try to add value at index 5*\033[0m" << std::endl;
		try
		{
			array1[5] = -42;
			std::cout << array1[5] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		std::cout << "\033[2m.Char.\033[0m" << std::endl;
		array2[0] = 'L';
		array2[1] = 'O';
		array2[2] = 'L';
		for (unsigned int i = 0; i < array2.getSize(); i++)
			std::cout << array2[i] << ", ";
		std::cout << std::endl;
		std::cout << "\033[0;32m*Try to add value at index 3*\033[0m" << std::endl;
		try
		{
			array2[3] = '!';
			std::cout << array2[3] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		std::cout << "------------------------------" << std::endl;
		std::cout << std::endl;
		std::cout << "\033[1m.Copy Constructor ARRAY.\033[0m" << std::endl;
		Array<int>	copyArray(array1);
		std::cout << "\033[0;32m*Nouvelle valeur de copyArray[0]*\033[0m" << std::endl;
		copyArray[0] = 5;
		std::cout << "Copy Array : " << copyArray[0] << " vs Array1 :" << array1[0] << std::endl;
		std::cout << std::endl;
		std::cout << "------------------------------" << std::endl;
		std::cout << std::endl;
	}
	return 0;
}
