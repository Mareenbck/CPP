#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void constructorStackTests(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.CONSTRUCTORS STACK.\033[0m" << std::endl;
	{
		std::cout << "Cat" << std::endl;
		Cat a;
		Cat b(a);
		Cat c;
		c = b;
		std::cout << "---------------------------" << std::endl;
		std::cout << "a is a : " << a.getType() << "and make : ";
		a.makeSound();
		std::cout << "🧠 brain address : " << a.getBrain() << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::cout << "b is a : " << b.getType() << "and make : ";
		b.makeSound();
		std::cout << "🧠 brain address : " << b.getBrain() << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::cout << "c is a : " << c.getType() << "and make : ";
		c.makeSound();
		std::cout << "🧠 brain address : " << c.getBrain() << std::endl;
		std::cout << "---------------------------" << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "Dog" << std::endl;
		Dog a;
		Dog b(a);
		Dog c;
		c = b;
		std::cout << "---------------------------" << std::endl;
		std::cout << "a is a : " << a.getType() << "and make : ";
		a.makeSound();
		std::cout << "🧠 brain address : " << a.getBrain() << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::cout << "b is a : " << b.getType() << "and make : ";
		b.makeSound();
		std::cout << "🧠 brain address : " << b.getBrain() << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::cout << "c is a : " << c.getType() << "and make : ";
		c.makeSound();
		std::cout << "🧠 brain address : " << c.getBrain() << std::endl;
		std::cout << "---------------------------" << std::endl;
	}
}

void constructorHeapTests(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.CONSTRUCTORS HEAP.\033[0m" << std::endl;
	{
		std::cout << "Cat" << std::endl;
		Cat *a = new Cat();
		Cat *b = new Cat(*a);
		Cat *c = new Cat();
		*c = *b;
		std::cout << "---------------------------" << std::endl;
		std::cout << "a is a : " << a->getType() << "and make : ";
		a->makeSound();
		std::cout << "🧠 brain address : " << a->getBrain() << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::cout << "b is a : " << b->getType() << "and make : ";
		b->makeSound();
		std::cout << "🧠 brain address : " << b->getBrain() << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::cout << "c is a : " << c->getType() << "and make : ";
		c->makeSound();
		std::cout << "🧠 brain address : " << c->getBrain() << std::endl;
		std::cout << "---------------------------" << std::endl;
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
		std::cout << "---------------------------" << std::endl;
		std::cout << "a is a : " << a->getType() << "and make : ";
		a->makeSound();
		std::cout << "🧠 brain address : " << a->getBrain() << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::cout << "b is a : " << b->getType() << "and make : ";
		b->makeSound();
		std::cout << "🧠 brain address : " << b->getBrain() << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::cout << "c is a : " << c->getType() << "and make : ";
		c->makeSound();
		std::cout << "🧠 brain address : " << c->getBrain() << std::endl;
		std::cout << "---------------------------" << std::endl;
		delete a;
		delete b;
		delete c;
	}
}

void mandatoryTests(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m.MANDATORY TESTS.\033[0m" << std::endl;
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << "Type : " << j->getType() << " " << std::endl;
	std::cout << "Type : " << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	std::cout << "\033[1m.DELETE.\033[0m" << std::endl;
	std::cout << "j Dog" << std::endl;
	delete j;
	std::cout << "i Cat" << std::endl;
	delete i;
	std::cout << std::endl;
}

void deepCopyTests(void)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
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
	std::cout << std::endl;
}

void arrayTests()
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1m...ARRAY TESTS...\033[0m" << std::endl;
	{
		Animal *farm[5];

		for (int i = 0; i < 5; i++)
		{
			if (i % 2)
				farm[i] = new Cat();
			else
				farm[i] = new Dog();
		}
		for (int i = 0; i < 5; i++)
			farm[i]->makeSound();
		for (int i = 0; i < 5; i++)
			delete farm[i];
	}
	std::cout << std::endl;
}
int main()
{
	constructorStackTests();
	constructorHeapTests();
	mandatoryTests();
	deepCopyTests();
	arrayTests();
	return 0;
}
