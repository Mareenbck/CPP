#include "Sample.class.hpp"
#include <iostream>

int main (){

	Sample instance;

	instance.publicfoo = 42;
	std::cout << "instance publicfoo : " << instance.publicfoo << std::endl;
	instance.publicBar();

	// instance._privatefoo = 42;
	// std::cout << "instance _privatefoo : " << instance._privatefoo << std::endl;
	// instance._privateBar();
	return 0;
}
