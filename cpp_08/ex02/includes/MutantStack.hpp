/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:29:29 by mbascuna          #+#    #+#             */
/*   Updated: 2022/10/03 18:06:18 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) {}
		~MutantStack(void) {}
		MutantStack(const MutantStack *src) : std::stack<T>(src) {}

		MutantStack &operator=(const MutantStack &rhs)
		{
			std::stack<T>::operator=(rhs);
			return *this;
		};

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

		iterator begin() {return this->c.begin();}
		iterator end() {return this->c.end();}
		const_iterator cbegin() {return this->c.cbegin();}
		const_iterator cend() {return this->c.cend();}
		reverse_iterator rbegin() {return this->rbegin();}
		reverse_iterator rend() {return this->rend(); }

};

#endif
