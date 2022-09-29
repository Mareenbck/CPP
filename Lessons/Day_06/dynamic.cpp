#include <iostream>
#include <typeinfo>
#include <exception>

class Parent {public: virtual ~Parent()};
class Child1 : public Parent{};
class Child2 : public Parent{};

int main (void)
{
	Child1 a;
	Parent *b = &a;

	Child1 *c = dynamic_cast<Child1 *>(b);
	if (c == NULL)
	{
		std::cout << "Conversion is NOT OK" << std::endl;
	}
	else
	{
		std::cout << "Conversion is ok "<< std::endl;
	}

	try
	{
		Child2 &d = dynamic_cast<Child2 &>(*b);
		std::cout << "Conversion is OK" << std::endl;
	}
	catch( std::bad_cast &bc)
	{
		std::cout << bc.what() << '\n';
		return 0;
	}
	return 0;

}
