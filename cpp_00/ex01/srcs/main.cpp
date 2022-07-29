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
		//afficher message
		std::cout << "*-----------------*" << std::endl;
		std::cout << "| >> Phonebook << |" << std::endl;
		std::cout << "|  Choose Action  |" << std::endl;
		std::cout << "|    1/ ADD       |" << std::endl;
		std::cout << "|    2/ SEARCH    |" << std::endl;
		std::cout << "|    3/ EXIT      |" << std::endl;
		std::cout << "*-----------------*" << std::endl;

		//recuperer avec getline
		std::getline(std::cin, input);
		//appeler fonction
		if (!input.compare("ADD") || !input.compare("add"))
			phonebook.addContact();
		else if (!input.compare("SEARCH") || !input.compare("search"))
			phonebook.searchContact();
		else if (!input.compare("EXIT") || !input.compare("exit"))
			break ;
		else
			std::cout << "----Wrong input----" << std::endl;
	}
	return 0;
}
