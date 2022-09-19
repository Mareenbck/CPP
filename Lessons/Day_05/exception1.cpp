#include <stdexcept>

void test1()
{
	try
	{
		//Do some stuff here
		if (/* there is an error*/)
			throw std::execption();
		else
			//Do some stuff
	}
	catch (std::execption e)
	{
		//handle the error here
	}
}

void test2()
{
	try
	{
		//Do some stuff here
		if (/* there is an error*/)
			throw std::execption();
		else
			//Do some stuff
	}
}

void test3()
{
	try
	{
		test2();
	}
	catch (std::execption& e)
	{
		//handle error
	}
}

void test4()
{
	class PEBKACException : public std::execption
	{
		public:
			virtual const char* whate() const throw()
				return ("Problem exists between Keyboard and Chair");
	};
	try
	{
		test3();
	}
	catch (PEBKACException &e)
	{
			//Handle the fact that user is an idiot
	}
	catch (std::execption &e)
	{
		//Handle other exceptions that are like std::exception
	}
}
