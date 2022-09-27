/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:30:55 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/27 14:35:33 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
#include <stddef.h>

template<typename T>
void print(T const &element)
{
	std::cout << element << " ";
}

template<typename T>
T multi(T &number)
{
	number *= 10;
	return number;
}

template<typename T>
T upper(T &character)
{
	if (character >= 'a' && character <= 'z')
		character -= 32;
	return character;
}

template<typename T, typename U>
void iter(T tab[], int size, U function)
{
	for (int i = 0; i < size; i++)
		function(tab[i]);
}

#endif
