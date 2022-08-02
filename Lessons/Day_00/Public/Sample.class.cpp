#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {

	std::cout << "Constructor called" << std::endl;
	this->publicfoo = 0;
	std::cout << "this->publicfoo : " << this->publicfoo << std::endl;
	this->_privatefoo = 0;
	std::cout << "this->_privatefoo : " << this->_privatefoo << std::endl;

	this->publicBar();
	this->_privateBar();
	return ;
}

Sample::~Sample(void){

	std::cout << "Destructor called" << std::endl;
	return ;
}

void Sample::publicBar(void) const {

	std::cout << "public Bar called" << std::endl;
	return;
}

void Sample::_privateBar(void) const {

	std::cout << "_private Bar called" << std::endl;
	return;
}
