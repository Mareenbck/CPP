#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void){

	std::cout << "Constructor called" << std::endl;

	return ;
}

Sample::~Sample(void){

	std::cout << "Destructor called" << std::endl;
	return ;
}

int Sample::getFoo(void) const{

	return this->_foo;
}

void Sample::setFoo(int v){

	this->_foo = v;
	return;
}

