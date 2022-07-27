#include "Sample.class.hpp"
#include <iostream>

int main (){

	Sample instance;

	std::cout << "instance _foo : " << instance.getFoo() << std::endl;
	instance.setFoo(42);
	std::cout << "instance _foo : " << instance.getFoo() << std::endl;
	return 0;
}
