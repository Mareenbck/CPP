#include "Span.hpp"

Span::Span(void) : _N(0)
{
	return;
}

Span::Span(unsigned int n) : _N(n)
{
	return;
}

Span::Span(Span const &src) : _N(src._N)
{
	*this = src;
	return ;
}

Span::~Span(void)
{
	return;
}

Span &Span::operator=(Span const &rhs)
{
	this->_vect = rhs.getVect();
	this->_N = rhs.getSize();
}

unsigned int Span::getSize(void) const
{
	return this->_N;
}

std::vector<int> Span::getVect(void) const
{
	return this->_vect;
}

void Span::addNumber(unsigned int i)
{
	//if length de vect est inferieur a N
	// alors pushback dans _vect
	// else throw lexception full
}

Span &Span::longestSpan(void)
{
	//chercher l'element max avec formule max et iterator
	//chercher lelement min
	//return max - min
}
