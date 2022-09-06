#include <string>

class Animal
{
	private:
		int _numberOfLegs;

	public:
		Animal();
		Animal(Animal const &);
		Animal & operator=(Animal const &);
		~Animal();

		void run(int distance);
};

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &);
		Cat & operator=(Cat const &);
		~Cat();

		void scornSomeone(std::string const & target);
};
