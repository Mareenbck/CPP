/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:08:05 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/26 14:18:46 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <stdint.h>

typedef struct s_data
{
	std::string key;
	int			value;
} Data;

uintptr_t 	serialize(Data* ptr);
Data* 		deserialize(uintptr_t raw);

#endif
