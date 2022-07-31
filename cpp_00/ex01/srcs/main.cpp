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
		if (!input.compare("ADD") || !input.compare("add") || !input.compare("1"))
			phonebook.addContact();
		else if (!input.compare("SEARCH") || !input.compare("search") || !input.compare("2"))
			phonebook.searchContact();
		else if (!input.compare("EXIT") || !input.compare("exit") || !input.compare("3"))
			break ;
		else
			std::cout << "\033[1;31m >>> Wrong input\033[0m:" << std::endl;
	}
	return 0;
}
