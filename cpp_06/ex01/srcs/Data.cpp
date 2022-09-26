/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:07:43 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/26 14:21:00 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t 	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* 		deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
