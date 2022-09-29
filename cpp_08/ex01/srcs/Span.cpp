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
	//si span 0 ou 1 element throw lexception
	//chercher l'element max avec formule max et iterator
	//chercher lelement min
	//return max - min
}

Span &Span::shortestSpan(void)
{
	// si span 0 ou 1 element throw lexception
	//conserver la valeur de max
	//trier le vector
	//dans une boucle faire la difference entre n et n-1
	//si la diff est plus petite que max , max devient cette nouvelle valeur
	//return max
}

const char *Span::EmptySpanException::what(void) const throw()
{
	return ("Span is empty");
}

const char *Span::FullSpanException::what(void) const throw()
{
	return ("Span is full");
}
