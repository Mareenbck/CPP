#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>

class Span
{
	public:
		Span(void);
		Span(unsigned int n);
		Span(Span const &src);
		~Span(void);

		Span &operator=(Span const &rhs);

		unsigned int getSize(void) const;
		std::vector<int> getVect(void)const ;

		void addNumber(unsigned int i);
		Span & shortestSpan();
		Span & longestSpan();

		class FullSpanException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
		class EmptySpanException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};

	private:
		unsigned int _N;
		std::vector<int> _vect;
};

#endif
