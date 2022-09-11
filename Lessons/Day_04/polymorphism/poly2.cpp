#include <string>
#include <iostream>

class Character
{
	public:
		virtual void sayHello(std::string const & target);
};

class Warrior : public Character
{
	public:
		virtual void sayHello(std::string const &target);
};

class Cat
{

};

void Character::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void Warrior::sayHello(std::string const &target)
{
	std::cout << "F*** off  " << target << " I don'n like you !" << std::endl;
}

int main()
{
	Warrior *a = new Warrior();
	Character *b = new Warrior();

	a->sayHello("students");
	b->sayHello("students");
}
