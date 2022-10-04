/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:05:49 by mbascuna          #+#    #+#             */
/*   Updated: 2022/08/05 13:03:08 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	this->_weapon = &new_weapon;
}

void HumanB::attack(void)
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << (*(this->_weapon)).getType() << std::endl;
	else
		std::cout << this->_name << " try but has no weapon " << std::endl;
}
