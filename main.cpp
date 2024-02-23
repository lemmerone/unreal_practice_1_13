#include <iostream>
#include <windows.h>
#include "Helpers.h"

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float a, b;

	std::cout << "Число два числа: ";
	std::cin >> a >> b;
	std::cout << "Квадрат суммы двух чисел: " << sum(a, b);
}