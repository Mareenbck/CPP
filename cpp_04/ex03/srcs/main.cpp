#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <iostream>
#include <iomanip>

int main()
{
	// {
	// 	std::cout << "\033[1m...AMATERIA ICE...\033[0m" << std::endl;
	// 	AMateria *a = new Ice();
	// 	Ice *b = new Ice();
	// 	AMateria *c = new Ice(*b);
	// 	AMateria *d;
	// 	//d ne peut pas s'instancier seul donc clone le a
	// 	d = a->clone();
	// 	Character Emma("Emma");
	// 	a->use(Emma);
	// 	delete a;
	// 	b->use(Emma);
	// 	delete b;
	// 	c->use(Emma);
	// 	d->use(Emma);
	// 	delete c;
	// 	delete d;
	// }
	// std::cout << std::endl;
	// {
	// 	std::cout << "\033[1m...AMATERIA CURE...\033[0m" << std::endl;
	// 	AMateria *a = new Cure();
	// 	Cure *b = new Cure();
	// 	AMateria *c = new Cure(*b);
	// 	AMateria *d;
	// 	// d ne peut pas s'instancier seul donc clone le a
	// 	d = a->clone();
	// 	Character Vikto("Vikto");
	// 	a->use(Vikto);
	// 	delete a;
	// 	b->use(Vikto);
	// 	delete b;
	// 	c->use(Vikto);
	// 	d->use(Vikto);
	// 	delete c;
	// 	delete d;
	// }
	// std::cout << std::endl;
	// {
	// 	std::cout << "\033[1m...CHARACTER...\033[0m" << std::endl;
	// 	ICharacter *Vikto = new Character();
	// 	Character *Mehdi = new Character("Mehdi");
	// 	ICharacter *Jeanne = new Character(*Mehdi);
	// 	Character Emma("Emma");
	// 	*Vikto = *Mehdi;
	// 	Emma = *Mehdi;
	// 	std::cout << "Vikto = Mehdi: " << Vikto->getName() << std::endl;
	// 	delete Vikto;
	// 	std::cout << "Mehdi : " << Mehdi->getName() << std::endl;
	// 	delete Mehdi;
	// 	std::cout << "Jeanne = Mehdi: " << Jeanne->getName() << std::endl;
	// 	delete Jeanne;
	// 	std::cout << "Emma = Mehdi: " << Emma.getName() << std::endl;
	// }
	std::cout << std::endl;
	{
		std::cout << "\033[1m...MANDATORY...\033[0m" << std::endl;
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter *me = new Character("me");
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter *bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
		return 0;
	}
};
