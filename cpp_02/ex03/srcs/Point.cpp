/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:57:47 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/06 10:57:48 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
	return;
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y)
{
	return;
}

Point::Point(Point const &src) : _x(src.getX()), _y(src.getY())
{
	return;
}

Point::~Point(void)
{
	return;
}

Point &Point::operator=(Point const &point)
{
	(void)point;
	return *this;
}

Fixed const &Point::getX(void) const
{
	return this->_x;
}

Fixed const &Point::getY(void) const
{
	return this->_y;
}

