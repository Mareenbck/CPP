/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:12:34 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/27 17:59:02 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	public:
		Array<T>(void) : _array(NULL), _size(0) { }
		Array<T>(unsigned int const &n) : _array(new T[n]), _size(n) { }
		~Array<T>(void)
		{
			if (_size > 0)
				delete [] _array;
		}

		Array<T> & operator=(Array<T> const &rhs)
		{
			//si il y a array le delete pour en new un nouveau et inserer les valeur de larray de rhs
		}

	private:
		T *_array;
		unsigned int _size;
};

#endif
