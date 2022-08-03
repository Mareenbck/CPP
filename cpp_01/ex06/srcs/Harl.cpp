/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:09:32 by mbascuna          #+#    #+#             */
/*   Updated: 2022/08/03 14:57:58 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void Harl::debug(void)
{
	std::cout << "\033[0;35m[ DEBUG ]\033[0m" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
	return ;
}

void Harl::info(void)
{
	std::cout << "\033[0;35m[ INFO ]\033[0m" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
	return ;
}

void Harl::warning(void)
{
	std::cout << "\033[0;35m[ WARNING ]\033[0m" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
	return ;
}

void Harl::error(void)
{
	std::cout << "\033[0;35m[ ERROR ]\033[0m" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
	return ;
}

void Harl::complain(std::string level)
{
	void (Harl::*f[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = -1;


	while (level.compare(msg[i]))
	{
		i++;
		if (i == 4)
			break ;
	}
	switch (i)
	{
		case 0:
			for (i = 0; i < 4; i++)
				(this->*f[i])();
			break;
		case 1:
			for (i = 1; i < 4; i++)
				(this->*f[i])();
			break;
		case 2:
			for (i = 2; i < 4; i++)
				(this->*f[i])();
			break;
		case (3):
			for (int i = 3; i < 4; i++)
				(this->*f[i])();
			break ;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
	// while (i < 4)
	// {
	// 	(this->*f[i])();
	// 	i++;
	// }
}
