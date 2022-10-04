/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:08:06 by mbascuna          #+#    #+#             */
/*   Updated: 2022/08/05 12:21:48 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;

	public:
		// Zombie(std::string name);
		Zombie(void);
		~Zombie(void);

		void announce(void);
		void set_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
