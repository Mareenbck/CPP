/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:30:31 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/15 15:37:10 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat Emma;
	Bureaucrat Vikto("Vitko", 2);
	Bureaucrat Fanny(Emma);

	std::cout << std::endl;
	std::cout << Emma.getName() << " with grade " << Emma.getGrade() << std::endl;
	std::cout << Vikto.getName() << " with grade " << Vikto.getGrade() << std::endl;
	std::cout << Fanny.getName() << " with grade " << Fanny.getGrade() << std::endl;
}
