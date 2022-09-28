/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:30:55 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/28 11:09:03 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
# include <stddef.h>


template<typename T, typename U>
void iter(T tab[], int size, U function)
{
	for (int i = 0; i < size; i++)
		function(tab[i]);
}

template<typename T>
void iter(T tab[], int size, void (*fct)(const T &))
{
	for (int i = 0; i < size; i++)
		fct(tab[i]);
}

#endif
