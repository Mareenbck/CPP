#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor :\033[0;34m Brain\033[0m" << std::endl;
	return;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain Copy constructor :\033[0;34m Brain\033[0m" << std::endl;
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor :\033[0;35m Brain\033[0m" << std::endl;
	return;
}

std::string const *Brain::getIdeas(void) const
{
	return this->ideas;
}

Brain &Brain::operator=(Brain const &rhs)
{
	for (int i = 0; i <= 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}
