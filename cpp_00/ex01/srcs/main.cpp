/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:39:37 by mbascuna          #+#    #+#             */
/*   Updated: 2022/08/01 16:07:05 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <limits>

# include "Contact.class.hpp"
# include "PhoneBook.class.hpp"

int main()
{
	std::string	input;
	PhoneBook phonebook;

	while (std::cin)
	{
		std::cout << "*-----------------*" << std::endl;
		std::cout << "| >> Phonebook << |" << std::endl;
		std::cout << "|    1/ ADD       |" << std::endl;
		std::cout << "|    2/ SEARCH    |" << std::endl;
		std::cout << "|    3/ EXIT      |" << std::endl;
		std::cout << "*-----------------*" << std::endl;
		std::cout << "\033[1;33mSelect an action ? \033[0m:"<< "\n\033[0;35mAction \033[0m: ";
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
			phonebook.addContact();
		else if (!input.compare("SEARCH"))
			phonebook.searchContact();
		else if (!input.compare("EXIT"))
			break ;
	}
	return 0;
}
