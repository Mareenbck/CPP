/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:56:42 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/22 17:09:27 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <limits>
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

		class ImpossibleException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class NotDisplayableException : public std::exception
		{
			public:
				const char *what() const throw();
		};

	private :
		std::string _input;
		double _double;
		bool _isImpossible;

};

#endif
