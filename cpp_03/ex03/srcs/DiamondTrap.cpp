/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:34:57 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/19 11:24:00 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("generic_clap_name"), FragTrap("generic"), ScavTrap("generic"), _name("generic")
{
	std::cout << "👏 Constructor : \033[0;34mHello DiamondTrap(generic)\033[0m" << std::endl;
	setHitsPoints(FragTrap::_hitPoints);
	setEnergyPoints(ScavTrap::_energyPoints);
	setAttackDamage(FragTrap::_attackDamage);
	return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	std::cout << "👏 Constructor : \033[0;34mHello DiamondTrap(" << name << ")\033[0m" << std::endl;
	setHitsPoints(FragTrap::_hitPoints);
	setEnergyPoints(ScavTrap::_energyPoints);
	setAttackDamage(FragTrap::_attackDamage);
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	std::cout << "👏 Copy constructor : \033[0;34mHello DiamondTrap(" << src._name << ")\033[0m" << std::endl;
	*this = src;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &rhs)
{
	this->_name = rhs._name;
	// ClapTrap::_name = this->_name;
	this->_hitPoints = rhs.get_hitPoints();
	this->_attackDamage = rhs.get_attackDamage();
	this->_energyPoints = rhs.get_energyPoints();

	return *this;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << this->_name << " le DiamondTrap du clan ClapTrap [ " << ClapTrap::_name << " ]" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "👽 Destructor DiamondTrap : \033[0;35mByebye (" << this->_name << ")\033[0m" << std::endl;
	return;
}
