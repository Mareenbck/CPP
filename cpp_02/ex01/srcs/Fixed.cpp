#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const i) : _fixed(i)
{
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(float const f): _fixed(f)
{
	std::cout << "Float constructor called" << std::endl;
	// this->_fixed.toFloat;
	return;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called " << std::endl;
	this->_fixed = rhs.getRawBits();

	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}

float Fixed::toFloat(void) const
{
	return (float)this->_fixed;
}

int Fixed::toInt(void) const
{
	return (int)this->_fixed;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.getRawBits();
	return o;
}
