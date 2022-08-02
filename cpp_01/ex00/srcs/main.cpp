/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:25:31 by mbascuna          #+#    #+#             */
/*   Updated: 2022/08/02 13:38:40 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie stack_zombie("MrStack");
	Zombie *heap_zombie = newZombie("MrHeap");

	randomChump("MrRandom");

	delete heap_zombie;

	return (0);
}
