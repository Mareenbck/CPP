#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->type = "Cat";
	std::cout << "Constructor :\033[0;34m " << this->type << "\033[0m" << std::endl;
	return;
}

Cat::Cat(Cat const &src) : Animal()
{
	std::cout << "Copy constructor :\033[0;34m (" << src.type << ")\033[0m" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Destructor :\033[0;35m " << this->type << "\033[0m" << std::endl;
	return;
}

Cat &Cat::operator=(Cat const &rhs)
{
	this->type = rhs.getType();

	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << " 🐱 Miaou " << std::endl;
}
