#include <iostream>
#include <string>


class Student
{
	private:
		std::string _login;

	public:
		Student(std::string login) : _login(login)
		{
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}

		~Student()
		{
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
};

int main()
{
	Student		bob = Student("bfubar"); // alloue sur stack et destroy automatiquement quand on sort de la fonction
	Student*	jim = new Student("jfubar"); // alloue sur la heap (en pratique utilise malloc)

	delete jim;

	return (0);
}
