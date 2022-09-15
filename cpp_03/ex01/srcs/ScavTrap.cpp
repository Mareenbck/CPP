/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:11:27 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/15 12:09:43 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "👏 Constructor : \033[0;34mHello ScavTrap\033[0m" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "👏 Constructor : \033[0;34mHello ScavTrap(" << name << ")\033[0m" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "👏 Copy constructor : \033[0;34mHello ScavTrap(" << src._name << ")\033[0m" << std::endl;
	*this = src;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_name = rhs.get_name();
	this->_hitPoints = rhs.get_hitPoints();
	this->_attackDamage = rhs.get_attackDamage();
	this->_energyPoints = rhs.get_energyPoints();

	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "👽 Destructor ScavTrap : \033[0;35mByebye (" << this->get_name() << ")\033[0m" << std::endl;
	return;
}

void ScavTrap::guardGate()
{
	std::cout << "\033[0;33m🏦 ScavTrap " << this->get_name() << " have entered in Gate keeper mode.\033[0m" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << this->get_name() << " cannot attack because he's dead\n";
		return ;
	}
	std::cout << "🪃  ScavTrap " << this->get_name() << " attacks " << target << " , causing " ;
	std::cout << this->get_attackDamage() << " points of damage!" << std::endl;
	this->_energyPoints--;

}
