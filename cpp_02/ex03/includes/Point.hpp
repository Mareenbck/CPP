#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(float const x, float const y);
		Point(Fixed const x, Fixed const y);
		Point(Point const &src);
		Point &operator=(Point const &point);
		~Point(void);

		Fixed getX(void) const;
		Fixed getY(void) const;

	private :
		Fixed const _x;
		Fixed const _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
