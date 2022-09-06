/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:57:45 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/06 11:45:33 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	Point P1;
	Point P2(1.44, 5.58);
	Point P3(2.22, 8.59);
	Point P4(Fixed(2.56f), Fixed(3.55f)); // Fixed constructor P2 = (4.18 ; 3.02)
	Point P5(Fixed(-3.01f), Fixed(4.75f)); // Fixed constructor P2 = (4.18 ; 3.02)
	Point P6(P2);
	Point P7 = P3;
	Point P8(2.04, 2.01);
	Point P9(5.38, 6.36);

	Point Ta(0, 0.5);
	Point Tb(-2.78, 8.14);
	Point Tc(5.38, 6.36);


	std::cout << "-------------" << std::endl;
	std::cout << "\033[1;33mP1 \033[0m";
	std::cout << "x: " << P1.getX() << " y: " << P1.getY() << std::endl;
	if (bsp(Ta, Tb, Tc, P1))
		std::cout << "\033[0;34mis Inside \033[0m" << std::endl;
	else
		std::cout << "\033[0;35mis Outside\033[0m" << std::endl;
	std::cout << "-------------" << std::endl;

	std::cout << "\033[1;33mP2 \033[0m";
	std::cout << "x: " << P2.getX() << " y: " << P2.getY() << std::endl;
	if (bsp(Ta, Tb, Tc, P2))
		std::cout << "\033[0;34mis Inside \033[0m" << std::endl;
	else
		std::cout << "\033[0;35mis Outside\033[0m" << std::endl;
	std::cout << "-------------" << std::endl;

	std::cout << "\033[1;33mP3 \033[0m";
	std::cout << "x: " << P3.getX() << " y: " << P3.getY() << std::endl;
	if (bsp(Ta, Tb, Tc, P3))
		std::cout << "\033[0;34mis Inside \033[0m" << std::endl;
	else
		std::cout << "\033[0;35mis Outside\033[0m" << std::endl;
	std::cout << "-------------" << std::endl;

	std::cout << "\033[1;33mP4 \033[0m";
	std::cout << "x: " << P4.getX() << " y: " << P4.getY() << std::endl;
	if (bsp(Ta, Tb, Tc, P4))
		std::cout << "\033[0;34mis Inside \033[0m" << std::endl;
	else
		std::cout << "\033[0;35mis Outside\033[0m" << std::endl;
	std::cout << "-------------" << std::endl;

	std::cout << "\033[1;33mP5 \033[0m";
	std::cout << "x: " << P5.getX() << " y: " << P5.getY() << std::endl;
	if (bsp(Ta, Tb, Tc, P5))
		std::cout << "\033[0;34mis Inside \033[0m" << std::endl;
	else
		std::cout << "\033[0;35mis Outside\033[0m" << std::endl;
	std::cout << "-------------" << std::endl;

	std::cout << "\033[1;33mP6 \033[0m";
	std::cout << "x: " << P6.getX() << " y: " << P6.getY() << std::endl;
	if (bsp(Ta, Tb, Tc, P6))
		std::cout << "\033[0;34mis Inside \033[0m" << std::endl;
	else
		std::cout << "\033[0;35mis Outside\033[0m" << std::endl;
	std::cout << "-------------" << std::endl;

	std::cout << "\033[1;33mP7 \033[0m";
	std::cout << "x: " << P7.getX() << " y: " << P7.getY() << std::endl;
	if (bsp(Ta, Tb, Tc, P7))
		std::cout << "\033[0;34mis Inside \033[0m" << std::endl;
	else
		std::cout << "\033[0;35mis Outside\033[0m" << std::endl;
	std::cout << "-------------" << std::endl;

	std::cout << "\033[1;33mP8 \033[0m";
	std::cout << "x: " << P8.getX() << " y: " << P8.getY() << std::endl;
	if (bsp(Ta, Tb, Tc, P8))
		std::cout << "\033[0;34mis Inside \033[0m" << std::endl;
	else
		std::cout << "\033[0;35mis Outside\033[0m" << std::endl;
	std::cout << "-------------" << std::endl;

	std::cout << "\033[1;33mP9 \033[0m";
	std::cout << "x: " << P9.getX() << " y: " << P9.getY() << std::endl;
	if (bsp(Ta, Tb, Tc, P9))
		std::cout << "\033[0;34mis Inside \033[0m" << std::endl;
	else
		std::cout << "\033[0;35mis Outside\033[0m" << std::endl;
	std::cout << "-------------" << std::endl;

	return 0;
}
