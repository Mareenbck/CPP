/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:04:47 by mbascuna          #+#    #+#             */
/*   Updated: 2022/10/03 15:55:41 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

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
		int shortestSpan();
		int longestSpan();

		void addNumber(const std::vector<int>::iterator &first, const std::vector<int>::iterator &last);

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

std::ostream &operator<<(std::ostream &o, Span const &rhs);


#endif
