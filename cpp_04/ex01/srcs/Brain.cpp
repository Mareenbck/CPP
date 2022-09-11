#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Constructor :\033[0;34m Brain\033[0m" << std::endl;
	return;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Copy constructor :\033[0;34m Brain\033[0m" << std::endl;
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << "Destructor :\033[0;35m Brain\033[0m" << std::endl;
	return;
}

std::string const *Brain::getIdeas(void) const
{
	return this->ideas;
}

Brain &Brain::operator=(Brain const &rhs)
{
	int i = 0;
	// std::string const *rhsIdeas = rhs.getIdeas();

	while (i <= 100)
	{
		this->ideas[i] = rhs.ideas[i];
		i++;
	}
	return *this;
}
