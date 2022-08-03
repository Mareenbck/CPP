#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) : foo(0){

	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void){

	std::cout << "Destructor called" << std::endl;
	return ;
}

void Sample::bar(void) const{

	std::cout << "member function called" << std::endl;
	return;
}
