/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:57:39 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/06 10:57:40 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed calcul_w1(Point const a, Point const b, Point const c, Point const point)
{
	// w1 = (Ax * (Cy - Ay)) + (Py - Ay) * (Cx - Ax) - Px * (Cy - Ay))
	//		   ---------------------------------------------------------
	//				    (By - Ay) * (Cx - Ax) - (Bx - Ax) * (Cy - Ay)
	Fixed w1;
	Fixed num;
	Fixed denum;

	num = (a.getX() * (c.getY() - a.getY())) + (point.getY() - a.getY()) * (c.getX() - a.getX()) - point.getX() * (c.getY() - a.getY());
	denum = (b.getY() - a.getY()) * (c.getX() - a.getX()) - (b.getX() - a.getX()) * (c.getY() - a.getY());
	w1 = num/denum;

	return w1;
}

Fixed calcul_w2(Point const a, Point const b, Point const c, Point const point)
{
	// w2 = Py - Ay - w1 * (By - Ay)
	//		   ---------------------
	//	      			Cy - Ay
	Fixed w2;
	Fixed w1 = calcul_w1(a, b, c, point);
	Fixed num;
	Fixed denum;

	num = point.getY() - a.getY() - w1 * (b.getY() - a.getY());
	denum = c.getY() - a.getY();
	w2 = num / denum;

	return w2;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed w1;
	Fixed w2;

	w1 = calcul_w1(a, b, c, point);
	w2 = calcul_w2(a, b, c, point);

	if (w1 > 0 && w2 > 0 && (w1 + w2) < 1)
		return true;
	else
		return false;
	// return ((w1 > 0 && w2 > 0 && (w1 + w2) < 1))
}
