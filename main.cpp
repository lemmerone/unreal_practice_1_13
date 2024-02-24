#include <iostream>
#include "Helpers.h"

void main()
{
	float a, b;

	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	std::cout << "Square of sum: " << sum(a, b);
}