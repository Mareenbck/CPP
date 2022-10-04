/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:03:22 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/19 11:46:04 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main(void)
{
	std::string s1 = "Vikto";

	ClapTrap Vikto(s1);
	ClapTrap Emma("Emma");
	ClapTrap claptrap3(Vikto);

	std::cout << std::endl;
	std::cout << Vikto.get_name() << ": Hits: " << Vikto.get_hitPoints() << " | Energy: " << Vikto.get_energyPoints() << " | Attack: " << Vikto.get_attackDamage() << std::endl;
	std::cout << Emma.get_name() << ": Hits : " << Emma.get_hitPoints() << " | Energy: " << Emma.get_energyPoints() << " | Attack: " << Emma.get_attackDamage() << std::endl;
	std::cout << claptrap3.get_name() << ": Hits: " << claptrap3.get_hitPoints() << " | Energy: " << claptrap3.get_energyPoints() << " | Attack: " << claptrap3.get_attackDamage() << std::endl;

	std::cout << std::endl;
	Vikto.attack("Emma");
	Emma.takeDamage(4);
	Emma.beRepaired(3);
	claptrap3.takeDamage(10);
	Emma.beRepaired(18);

	Emma.attack(s1);
	Vikto.takeDamage(9);
	Emma.attack(s1);
	Vikto.takeDamage(9);
	Emma.attack(s1);

	Vikto.beRepaired(3);
	Vikto.beRepaired(64);
	std::cout << std::endl;
	std::cout << Vikto.get_name() << ": Hits: " << Vikto.get_hitPoints() << " | Energy: " << Vikto.get_energyPoints() << " | Attack: " << Vikto.get_attackDamage() << std::endl;
	std::cout << Emma.get_name() << ": Hits: " << Emma.get_hitPoints() << " | Energy: " << Emma.get_energyPoints() << " | Attack: " << Emma.get_attackDamage() << std::endl;
	std::cout << claptrap3.get_name() << ": Hits: " << claptrap3.get_hitPoints() << " | Energy: " << claptrap3.get_energyPoints() << " | Attack: " << claptrap3.get_attackDamage() << std::endl;
	std::cout << std::endl;

	return 0;
}
