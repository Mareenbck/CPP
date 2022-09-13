/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:03:22 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/13 15:32:46 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	std::string s1 = "Vikto";

	ClapTrap Clap_Vikto(s1);
	ClapTrap Clap_Emma("Emma");
	ScavTrap Scav_Mehdi("Mehdi");
	FragTrap Frag_Jeanne("Jeannot");

	std::cout << std::endl;
	std::cout << Clap_Vikto.get_name() << ": Hits: " << Clap_Vikto.get_hitPoints() << " | Energy: " << Clap_Vikto.get_energyPoints() << " | Attack: " << Clap_Vikto.get_attackDamage() << std::endl;
	std::cout << Clap_Emma.get_name() << ": Hits : " << Clap_Emma.get_hitPoints() << " | Energy: " << Clap_Emma.get_energyPoints() << " | Attack: " << Clap_Emma.get_attackDamage() << std::endl;
	std::cout << Scav_Mehdi.get_name() << ": Hits: " << Scav_Mehdi.get_hitPoints() << " | Energy: " << Scav_Mehdi.get_energyPoints() << " | Attack: " << Scav_Mehdi.get_attackDamage() << std::endl;
	std::cout << Frag_Jeanne.get_name() << ": Hits: " << Frag_Jeanne.get_hitPoints() << " | Energy: " << Frag_Jeanne.get_energyPoints() << " | Attack: " << Frag_Jeanne.get_attackDamage() << std::endl;

	std::cout << std::endl;
	Clap_Vikto.attack("Emma");
	Clap_Emma.takeDamage(4);
	Clap_Emma.beRepaired(3);

	std::cout << std::endl;
	Clap_Vikto.attack(Scav_Mehdi.get_name());
	Scav_Mehdi.takeDamage(Clap_Vikto.get_attackDamage());

	std::cout << std::endl;
	Clap_Vikto.attack(Frag_Jeanne.get_name());
	Frag_Jeanne.highFivesGuys();

	std::cout << std::endl;
	Clap_Emma.attack(s1);
	Clap_Vikto.takeDamage(Clap_Emma.get_attackDamage());
	Scav_Mehdi.attack(s1);
	Clap_Vikto.takeDamage(Scav_Mehdi.get_attackDamage());

	std::cout << std::endl;
	Frag_Jeanne.attack(Scav_Mehdi.get_name());
	Scav_Mehdi.takeDamage(Frag_Jeanne.get_attackDamage());
	Frag_Jeanne.highFivesGuys();

	std::cout << std::endl;
	Clap_Emma.attack(Scav_Mehdi.get_name());
	Scav_Mehdi.guardGate();

	Clap_Vikto.beRepaired(3);
	std::cout << std::endl;
	std::cout << Clap_Vikto.get_name() << ": Hits: " << Clap_Vikto.get_hitPoints() << " | Energy: " << Clap_Vikto.get_energyPoints() << " | Attack: " << Clap_Vikto.get_attackDamage() << std::endl;
	std::cout << Clap_Emma.get_name() << ": Hits: " << Clap_Emma.get_hitPoints() << " | Energy: " << Clap_Emma.get_energyPoints() << " | Attack: " << Clap_Emma.get_attackDamage() << std::endl;
	std::cout << Scav_Mehdi.get_name() << ": Hits: " << Scav_Mehdi.get_hitPoints() << " | Energy: " << Scav_Mehdi.get_energyPoints() << " | Attack: " << Scav_Mehdi.get_attackDamage() << std::endl;
	std::cout << Frag_Jeanne.get_name() << ": Hits: " << Frag_Jeanne.get_hitPoints() << " | Energy: " << Frag_Jeanne.get_energyPoints() << " | Attack: " << Frag_Jeanne.get_attackDamage() << std::endl;
	std::cout << std::endl;

	std::cout << "CONSTRUCTOR" << std::endl;
	DiamondTrap a("Chloe");
	std::cout << "Hits points " << a.get_hitPoints() <<std::endl;
	std::cout << "Attack Damage " << a.get_attackDamage() <<std::endl;
	std::cout << "Energy points " << a.get_energyPoints() <<std::endl;

	DiamondTrap b;
	DiamondTrap c(a);

	std::cout << std::endl;
	a.whoAmI();
	b.whoAmI();
	c.whoAmI();

	std::cout << std::endl;
	a.attack("Mehdi");
	a.guardGate();
	a.highFivesGuys();
	a.beRepaired(10);
	a.takeDamage(5);
	std::cout << std::endl;

	return 0;
}
