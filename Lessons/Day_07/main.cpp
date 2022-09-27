#include <iostream>

template<typename T>
T max(T x, T y)
{
	return (x >= y ? x : y);
}

int main(void)
{
	int a = 21;
	int b = 42;

	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max<int>(a, b) << std::endl;
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max(a, b) << std::endl;

	return (0);
}
