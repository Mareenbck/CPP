/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:02:31 by mbascuna          #+#    #+#             */
/*   Updated: 2022/08/03 15:05:13 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i = 0;
	if (N <= 0)
		return 0;
	Zombie	*horde = new Zombie[N];

	while (i < N)
	{
		horde[i].set_name(name);
		horde[i].announce();
		i++;
	}
	return (&horde[0]);
}
