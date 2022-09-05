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
}

Point::~Point(void)
{
	return;
}

Point &Point::operator=(const Point &point)
{
	std::cout << "operator= " << std::endl;
	Point tmp(point);
	tmp(*this);
		// (void)point;
		// Fixed fx = point.getX();
		// Fixed fy = point.getY();
		this->_x = point.getX();
	// this->_y = point.getY();
	// (fx, fy);
	// // this = Point(fx, fy);
	// this->_x.setRawBits(fx.getRawBits());
	// this->_y.setRawBits(fy.getRawBits());
	// // this->_y = fy.toFloat();
	// // this->_x = fx.toFloat();
	// std::cout << "operator= fx" << fx.toFloat() << std::endl;
	// std::cout << "operator= this" << this->_x << std::endl;
	return *this;
}

Fixed Point::getX(void) const
{
	return this->_x;
}

Fixed Point::getY(void) const
{
	return this->_y;
}
