#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{
	return;
}

Fixed::Fixed(int const i)
{
	this->_n = (i << this->_bits);
	return;
}

Fixed::Fixed(float const f)
{
	this->_n = roundf(f * (1 << this->_bits));
	return;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed::~Fixed(void)
{
	return;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	setRawBits(rhs.getRawBits());
	return (*this);
}

/*.......Operateurs comparaisons.......*/

bool Fixed::operator>(Fixed const &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

/*.......Operateurs arithmetiques.......*/

Fixed Fixed::operator+(Fixed const &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

/*.......Operateurs incrementations.......*/
Fixed &Fixed::operator++(void)
{
	this->_n += 1;

	return *this;
}
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	++(*this);

	return temp;
}

Fixed &Fixed::operator--(void)
{
	this->_n--;

	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);

	--(*this);
	return temp;
}

/*.......Operateurs min & max.......*/

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return a;
	return b;
}

int Fixed::getRawBits(void) const
{
	return this->_n;
}

void Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}

float Fixed::toFloat(void) const
{
	return (float)this->_n / (float)(1 << this->_bits);
}

int Fixed::toInt(void) const
{
	return this->_n >> this->_bits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
