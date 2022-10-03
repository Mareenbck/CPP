#include "Span.hpp"

Span::Span(void) : _N(0)
{
	return;
}

Span::Span(unsigned int n) : _N(n)
{
	this->_vect.reserve(n);
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
	return *this;
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
	if (this->_vect.size() < this->_N)
		this->_vect.push_back(i);
	else
		throw FullSpanException();
}

void Span::addNumber(const std::vector<int>::iterator &first, const std::vector<int>::iterator &last)
{
	std::vector<int>::iterator end = _vect.end();
	if (this->_vect.size() >= this->_N)
		throw FullSpanException();
	else
		this->_vect.insert(end, first, last);
}


int Span::longestSpan(void)
{
	if (this->_vect.size() < 2)
		throw EmptySpanException();
	int max = *std::max_element(_vect.begin(), _vect.end());
	int min = *std::min_element(_vect.begin(), _vect.end());
	return (max - min);
}

int Span::shortestSpan(void)
{
	if (this->_vect.size() < 2)
		throw EmptySpanException();
	int max = longestSpan();
	sort(_vect.begin(), _vect.end());
	for (unsigned long int i = 1; i < _vect.size(); i++)
	{
		if (_vect[i] - _vect[i - 1] < max)
			max = _vect[i] - _vect[i - 1];
	}
	return (max);
}

const char *Span::EmptySpanException::what(void) const throw()
{
	return ("\033[0;31mSpan is empty\033[0m");
}

const char *Span::FullSpanException::what(void) const throw()
{
	return ("\033[0;31mSpan is full\033[0m");
}

std::ostream &operator<<(std::ostream &o, Span const &rhs)
{
	std::vector<int> v = rhs.getVect();
	for (unsigned long int i = 0; i < v.size(); i++)
		o << v[i] << ", ";
	std::cout << std::endl;
	return o;
}
