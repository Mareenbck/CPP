/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:03:33 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/15 12:06:26 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"), _hitPoints(10), _attackDamage(0), _energyPoints(10)
{
	std::cout << "👏 Constructor : \033[0;34mHello ClapTrap\033[0m" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _attackDamage(0), _energyPoints(10)
{
	std::cout << "👏 Constructor : \033[0;34mHello ClapTrap(" << _name << ")\033[0m" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << "👏 Copy constructor : \033[0;34mHello ClapTrap(" << this->_name << ")\033[0m" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_name = rhs.get_name() + "_copy";
	this->_hitPoints = rhs.get_hitPoints();
	this->_attackDamage = rhs.get_attackDamage();
	this->_energyPoints = rhs.get_energyPoints();

	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "👽 Destructor : \033[0;35mByebye (" << this->_name << ")\033[0m" << std::endl;
	return;
}

std::string	ClapTrap::get_name(void) const
{
	return (this->_name);
}

int ClapTrap::get_hitPoints(void) const
{
	if (this->_hitPoints <= 0)
		return 0;
	else
		return (this->_hitPoints);
}

int	ClapTrap::get_energyPoints(void) const
{
	if (this->_energyPoints <= 0)
		return 0;
	else
		return (this->_energyPoints);
}

int	ClapTrap::get_attackDamage(void) const
{
	return (this->_attackDamage);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << this->get_name() << " cannot attack because he's dead\n";
		return ;
	}
	std::cout << "🔫 " << this->get_name() << " attacks " << target << " , causing " ;
	std::cout << this->get_attackDamage() << " points of damage!" << std::endl;
	this->_energyPoints--;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << "⛔️ " << this->get_name() << " cannot be repaired, he is alreday dead\n";
		return ;
	}
	std::cout << "💉 " << this->get_name() << " be repaired with " << amount << " points";
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "   \033[1mHit points\033[0m are now equal to : " << this->get_hitPoints() << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "💥 " << this->get_name() << " take " << amount << " damages!";
	this->_hitPoints -= amount;
	this->_energyPoints--;
	std::cout << "   \033[1mHit points\033[0m are now equal to : " << this->get_hitPoints() << std::endl;
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << "   \033[31m" << this->get_name() << " is dead !!\033[0m" << std::endl;
		return ;
	}
}
