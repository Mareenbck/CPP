/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:14:12 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/26 14:27:50 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
	Data		*first_data;
	Data		*deserialized;
	uintptr_t	serialized;

	first_data = new Data();
	first_data->key = "Ecole";
	first_data->value = 42;

	std::cout << "*********************" << std::endl;
	std::cout << "*   CREATING DATA   *" << std::endl;
	std::cout << "*********************" << std::endl;
	std::cout << "Key : " << first_data->key << std::endl;
	std::cout << "Value : " << first_data->value << std::endl;
	std::cout << std::endl;
	std::cout << "*********************" << std::endl;
	std::cout << "*   SERIALIZATION   *" << std::endl;
	std::cout << "*********************" << std::endl;
	serialized = serialize(first_data);
	std::cout << "Serialized : " << serialized << std::endl;
	std::cout << std::endl;
	std::cout << "***********************" << std::endl;
	std::cout << "*   DESERIALIZATION   *" << std::endl;
	std::cout << "***********************" << std::endl;
	deserialized = deserialize(serialized);
	std::cout << "Key : " << deserialized->key << std::endl;
	std::cout << "Value : " << deserialized->value << std::endl;
	std::cout << std::endl;
	delete first_data;
	return 0;

}
