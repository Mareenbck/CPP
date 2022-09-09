/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:03:22 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/09 13:49:11 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::string s1 = "Vikto";

	ClapTrap Clap_Vikto(s1);
	ClapTrap Clap_Emma("Emma");
	ScavTrap Scav_Mehdi("Mehdi");

	std::cout << std::endl;
	std::cout << Clap_Vikto.get_name() << ": Hits: " << Clap_Vikto.get_hitPoints() << " | Energy: " << Clap_Vikto.get_energyPoints() << " | Attack: " << Clap_Vikto.get_attackDamage() << std::endl;
	std::cout << Clap_Emma.get_name() << ": Hits : " << Clap_Emma.get_hitPoints() << " | Energy: " << Clap_Emma.get_energyPoints() << " | Attack: " << Clap_Emma.get_attackDamage() << std::endl;
	std::cout << Scav_Mehdi.get_name() << ": Hits: " << Scav_Mehdi.get_hitPoints() << " | Energy: " << Scav_Mehdi.get_energyPoints() << " | Attack: " << Scav_Mehdi.get_attackDamage() << std::endl;

	std::cout << std::endl;
	Clap_Vikto.attack("Emma");
	Clap_Emma.takeDamage(4);
	Clap_Emma.beRepaired(3);

	std::cout << std::endl;
	Clap_Vikto.attack(Scav_Mehdi.get_name());
	Scav_Mehdi.takeDamage(10);

	std::cout << std::endl;
	Clap_Emma.attack(s1);
	Clap_Vikto.takeDamage(9);
	Scav_Mehdi.attack(s1);
	Clap_Vikto.takeDamage(9);

	std::cout << std::endl;
	Clap_Emma.attack(Scav_Mehdi.get_name());
	Scav_Mehdi.guardGate();

	Clap_Vikto.beRepaired(3);
	std::cout << std::endl;
	std::cout << Clap_Vikto.get_name() << ": Hits: " << Clap_Vikto.get_hitPoints() << " | Energy: " << Clap_Vikto.get_energyPoints() << " | Attack: " << Clap_Vikto.get_attackDamage() << std::endl;
	std::cout << Clap_Emma.get_name() << ": Hits: " << Clap_Emma.get_hitPoints() << " | Energy: " << Clap_Emma.get_energyPoints() << " | Attack: " << Clap_Emma.get_attackDamage() << std::endl;
	std::cout << Scav_Mehdi.get_name() << ": Hits: " << Scav_Mehdi.get_hitPoints() << " | Energy: " << Scav_Mehdi.get_energyPoints() << " | Attack: " << Scav_Mehdi.get_attackDamage() << std::endl;
	std::cout << std::endl;

	return 0;
}
