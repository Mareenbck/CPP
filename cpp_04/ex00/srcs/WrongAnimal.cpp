#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
	std::cout << "Constructor :\033[0;34m " << this->type << "\033[0m" << std::endl;

	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
	std::cout << "Copy Constructor :\033[0;34m " << this->type << "\033[0m" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor : \033[0;35mWrongAnimal\033[0m" << std::endl;
	return;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->type = rhs.getType();

	return *this;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << " 🐾 WrongAnimal " << std::endl;
}
