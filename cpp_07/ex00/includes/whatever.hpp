/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:04:53 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/27 12:28:19 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T &x, T &y)
{
	T tmp;

	tmp = y;
	y = x;
	x = tmp;
}

template<typename T>
T min(T x, T y)
{
	if (y <= x)
		return y;
	else
		return x;
}

template<typename T>
T max(T x, T y)
{
	if (y >= x)
		return y;
	else
		return x;
}

#endif
