/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:05:49 by mbascuna          #+#    #+#             */
/*   Updated: 2022/08/03 15:16:45 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void HumanB::attack(void)
{
	if (this->_weapon)
	{
		std::cout << this->_name << " attacks with their " << (*(this->_weapon)).getType() << std::endl;
	}
	else
	{
		std::cout << this->_name << " has no weapon "<< std::endl;
	}
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
