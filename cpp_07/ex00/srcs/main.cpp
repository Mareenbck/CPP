/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:25:34 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/27 13:52:21 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


int main( void )
{
	int a = 2;
	int b = 3;

	std::cout << "******************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Initial : a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "After swap : a = " << a << ", b = " << b << std::endl;
	std::cout << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << std::endl;
	std::cout << "******************************************" << std::endl;
	std::cout << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "Initial : c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "After swap : c = " << c << ", d = " << d << std::endl;
	std::cout << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << std::endl;
	std::cout << "******************************************" << std::endl;

	return 0;
}
