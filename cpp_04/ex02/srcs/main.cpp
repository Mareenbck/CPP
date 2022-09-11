#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\033[1m...CONSTRUCTOR STACK...\033[0m" << std::endl;
	{
		std::cout << "Cat" << std::endl;
		Cat a;
		Cat b(a);
		Cat c;
		c = b;
		std::cout << "c is a : " << c.getType() << std::endl;
		std::cout << "c make : ";
		c.makeSound();
		std::cout << "c brain address : " << c.getBrain() << std::endl;
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
		std::cout << "c brain address : " << c.getBrain() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\033[1m...CONSTRUCTOR POINTEUR...\033[0m" << std::endl;
	{
		std::cout << "Cat" << std::endl;
		Cat *a = new Cat();
		Cat *b = new Cat(*a);
		Cat *c = new Cat();
		*c = *b;
		std::cout << "c is a : " << c->getType() << std::endl;
		std::cout << "c make : ";
		c->makeSound();
		std::cout << "c brain address : " << c->getBrain() << std::endl;
		delete a;
		delete b;
		delete c;
	}
	std::cout << std::endl;
	{
		std::cout << "Dog" << std::endl;
		Dog *a = new Dog();
		Dog *b = new Dog(*a);
		Dog *c = new Dog();
		*c = *b;
		std::cout << "c is a : " << c->getType() << std::endl;
		std::cout << "c make : ";
		c->makeSound();
		std::cout << "c brain address : " << c->getBrain() << std::endl;
		delete a;
		delete b;
		delete c;
	}
	std::cout << std::endl;
	{
		std::cout << "\033[1m...TESTS...\033[0m" << std::endl;
		const AAnimal *j = new Dog();
		const AAnimal *i = new Cat();
		std::cout << "Type : " << j->getType() << " " << std::endl;
		std::cout << "Type : " << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		std::cout << "\033[1m.DELETE.\033[0m" << std::endl;
		std::cout << "j Dog" << std::endl;
		delete j;
		std::cout << "i Cat" << std::endl;
		delete i;
	}
	std::cout << std::endl;
	{
		std::cout << "\033[1m...TESTS COPY...\033[0m" << std::endl;
		const Cat a;
		const Cat *b = new Cat(a);
		std::cout << "a brain address : " << a.getBrain() << std::endl;
		std::cout << "b brain address : " << b->getBrain() << std::endl;
		a.makeSound();
		b->makeSound();
		std::cout << "a Type : " << a.getType() << " " << std::endl;
		std::cout << "b Type : " << b->getType() << " " << std::endl;
		delete b;
	}
	// const AAnimal a;

	std::cout << std::endl;
	std::cout << "\033[1m.END.\033[0m" << std::endl;
	return 0;
}
