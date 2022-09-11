#include <string>
#include <iostream>

class ACharacter
{
	public:
		virtual void attack(std::string const & target) = 0;
	 	void sayHello(std::string const & target);
};

class Warrior : public ACharacter
{
	public:
		virtual void attack(std::string const &target);
};

void ACharacter::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void Warrior::attack(std::string const &target)
{
	std::cout << "attacks " << target << " with a sword !" << std::endl;
}

// void Warrior::sayHello(std::string const &target)
// {
// 	std::cout << "F*** off  " << target << " I don'n like you !" << std::endl;
// }

int main()
{
	ACharacter *a = new Warrior();
	// ACharacter *b = new ACharacter();

	a->sayHello("students");
	a->attack("roger");
	// b->sayHello("students");
}
