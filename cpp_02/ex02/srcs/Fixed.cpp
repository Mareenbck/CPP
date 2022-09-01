#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_n = (i << this->_bits);
	return;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_n = roundf(f * (1 << this->_bits));
	return;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called " << std::endl;
	this->_n = rhs.getRawBits();

	return *this;
}

/*.......Operateurs comparaisons.......*/

bool Fixed::operator>(Fixed const &rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (this->toFloat() >= rhs.toFloat());
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (this->toFloat() != rhs.toFloat());
}

/*.......Operateurs arithmetiques.......*/

Fixed Fixed::operator+(Fixed const &rhs) const
{
	std::cout << "Addition operator called " << std::endl;
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	std::cout << "minus operator called " << std::endl;
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	std::cout << "multiplication operator called " << std::endl;
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	std::cout << "DIVISION operator called " << std::endl;
	return Fixed(this->toFloat() / rhs.toFloat());
}

/*.......Operateurs incrementations.......*/

Fixed &Fixed::operator++(void)
{
	std::cout << "++  operator called " << std::endl;
	this->_n += 1;

	return *this;
}

Fixed &Fixed::operator--(void)
{
	std::cout << "--  operator called " << std::endl;
	this->_n--;

	return *this;
}

//IL MANQUE LES PREINCREMENTATIONS

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	else
		return b;
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return a;
	else
		return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	else
		return b;
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return a;
	else
		return b;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	this->_n += 1;
	return (temp);
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
