/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:07:02 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/09 14:18:06 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "👏 Constructor : \033[0;34mHello FragTrap(" << name << ")\033[0m" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "👏 Copy constructor : \033[0;34mHello FragTrap(" << src._name << ")\033[0m" << std::endl;
	*this = src;
}

FragTrap & FragTrap::operator=(FragTrap const &rhs)
{
	this->_name = rhs.get_name();
	this->_hitPoints = rhs.get_hitPoints();
	this->_attackDamage = rhs.get_attackDamage();
	this->_energyPoints = rhs.get_energyPoints();

	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "👽 Destructor FragTrap : \033[0;35mByebye (" << this->get_name() << ")\033[0m" << std::endl;
	return;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "\033[0;32m🖐  FragTrap " << this->get_name() << " wants a High Five !!!\033[0m" << std::endl;
}

