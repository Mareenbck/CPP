/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:34:57 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/09 16:07:30 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap()
{
	std::cout << "👏 Constructor : \033[0;34mHello DiamondTrap\033[0m" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name) :  ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << "👏 Constructor : \033[0;34mHello DiamondTrap(" << name << ")\033[0m" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src)
{
	std::cout << "👏 Copy constructor : \033[0;34mHello DiamondTrap(" << src._name << ")\033[0m" << std::endl;
	*this = src;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &rhs)
{
	this->_name = rhs.get_name();
	this->_hitPoints = rhs.get_hitPoints();
	this->_attackDamage = rhs.get_attackDamage();
	this->_energyPoints = rhs.get_energyPoints();

	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "👽 Destructor DiamondTrap : \033[0;35mByebye (" << this->get_name() << ")\033[0m" << std::endl;
	return;
}
