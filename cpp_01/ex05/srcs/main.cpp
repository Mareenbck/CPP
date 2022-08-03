/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:51:22 by mbascuna          #+#    #+#             */
/*   Updated: 2022/08/03 14:33:55 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;

	std::cout << "\033[0;35m[ DEBUG ]\033[0m" << std::endl;
	harl.complain("DEBUG");
	std::cout << "\033[0;35m[ INFO ]\033[0m" << std::endl;
	harl.complain("INFO");
	std::cout << "\033[0;35m[ WARNING ]\033[0m" << std::endl;
	harl.complain("WARNING");
	std::cout << "\033[0;35m[ ERROR ]\033[0m" << std::endl;
	harl.complain("ERROR");

	return (0);
}
