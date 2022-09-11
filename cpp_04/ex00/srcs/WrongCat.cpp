#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "Constructor :\033[0;34m " << this->type << "\033[0m" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal()
{
	std::cout << "Copy constructor :\033[0;34m (" << src.type << ")\033[0m" << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor :\033[0;35m " << this->type << "\033[0m" << std::endl;
	return;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	this->type = rhs.getType();

	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << " 🐱 Miaou " << std::endl;
}
