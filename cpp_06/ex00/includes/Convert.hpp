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

# include <iostream>

class Convert
{
	public:
		Convert();
		Convert(std::string input);
		Convert(Convert const & src);
		~Convert();

		Convert &operator=(Convert const &rhs);

		std::string Convert::getInput(void) const;

		bool Convert::isChar(void);
		bool Convert::isInt(void);
		bool Convert::isFloat(void);

	private:
		std::string _input;
		char		_char;
		int			_int;
		float		_float;
		double		_double;
		double		_toDouble;

};

#endif
