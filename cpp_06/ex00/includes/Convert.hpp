/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:56:42 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/26 13:43:47 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <climits>
#include <cctype>
#include <cstdlib>
#include <cfloat>

class Convert
{
	public:
		Convert();
		Convert(std::string input);
		Convert(Convert const & src);
		~Convert();

		Convert &operator=(Convert const &rhs);

		std::string getInput(void) const;

		void toChar();
		void toInt();
		void toFloat();
		void toDouble();
		bool isChar();

	private :
		std::string _input;
		double 		_double;
		int 		_int;
		float 		_float;

};

#endif
