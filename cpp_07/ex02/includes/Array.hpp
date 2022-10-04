/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:12:34 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/28 16:44:39 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstdlib>
# include <exception>
# include <iostream>

template <typename T>
class Array
{
	public:
		Array<T>(void) : _array(NULL), _size(0) {
			std::cout << "Default Constructor array with size of " << _size << std::endl;
		}
		Array<T>(unsigned int const &n) : _array(new T[n]), _size(n) {
			std::cout << "Constructor with size of " << _size << std::endl;
		}
		Array<T>(Array<T> const &src){
			_array = NULL;
			*this = src;
			std::cout << "Copy Constructor with size of " << _size << std::endl;
		}

		~Array<T>(void){
			if (_size > 0)
				delete [] _array;
		}

		Array<T> & operator=(Array<T> const &rhs){
			_size = rhs._size;
			if (_array != NULL)
				delete [] _array;
			_array = new T[rhs._size];
			for (unsigned int i = 0; i < rhs._size; i++)
				_array[i] = rhs._array[i];
			return *this;
		}

		T & operator[](unsigned int i){
			if (i >= _size)
				throw indexTooHigh();
			else
				return this->_array[i];
		}

		class indexTooHigh : public std::exception{
			public:
				virtual const char *what(void) const throw()
				{
					return ("Wrong Index");
				}
		};

		unsigned int getSize(void){
			return this->_size;
		}

	private:
		T *_array;
		unsigned int _size;
};

#endif
