#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\033[1m.CONSTRUCTOR.\033[0m" << std::endl;
	{
		std::cout << "Animal" << std::endl;
		Animal a;
		Animal b(a);
		Animal c;
		c = b;
		std::cout << "c is a : " << c.getType() << std::endl;
		std::cout << "c make : ";
		c.makeSound();
	}
	std::cout << std::endl;
	{
		std::cout << "Cat" << std::endl;
		Cat a;
		Cat b(a);
		Cat c;
		c = b;
		std::cout << "c is a : " << c.getType() << std::endl;
		std::cout << "c make : ";
		c.makeSound();
	}
	std::cout << std::endl;
	{
		std::cout << "Dog" << std::endl;
		Dog a;
		Dog b(a);
		Dog c;
		c = b;
		std::cout << "c is a : " << c.getType() << std::endl;
		std::cout << "c make : ";
		c.makeSound();
	}
	std::cout << std::endl;
	{
		std::cout << "\033[1m.TESTS.\033[0m" << std::endl;
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << "Type : " << j->getType() << " " << std::endl;
		std::cout << "Type : " << i->getType() << " " << std::endl;
		i->makeSound(); // will output the cat sound!
		j->makeSound();
		meta->makeSound();
		std::cout << "\033[1m.DELETE.\033[0m" << std::endl;
		std::cout << "meta" << std::endl;
		delete meta;
		std::cout << "j Dog" << std::endl;
		delete j;
		std::cout << "i Cat" << std::endl;
		delete i;
	}
	std::cout << std::endl;
	{
		std::cout << "\033[1m.WRONG TESTS.\033[0m" << std::endl;
		const WrongAnimal *meta = new WrongAnimal();
		const WrongAnimal *i = new WrongCat();
		std::cout << "Type : " << meta->getType() << " " << std::endl;
		std::cout << "Type : " << i->getType() << " " << std::endl;
		i->makeSound(); // will output the cat sound!
		meta->makeSound();
		std::cout << "\033[1m.DELETE.\033[0m" << std::endl;
		std::cout << "meta" << std::endl;
		delete meta;
		std::cout << "i Cat" << std::endl;
		delete i;
	}
	std::cout << "\033[1m.END.\033[0m" << std::endl;
	return 0;
}
