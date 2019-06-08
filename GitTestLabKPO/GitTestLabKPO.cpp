#include "pch.h"
#include <iostream>
#include "locale"


int main()
{
	setlocale(LC_ALL, "Russian");
	
	double a = 0;
	int b = 0;
	char operation;

	std::cout << "Enter first number: ";
	std::cin >> a;
	std::cout << "Enter second number: ";
	std::cin >> b;
	std::cout << "Enter operation: ";
	std::cin >> operation;

	switch (operation) {
	case '-':
		std::cout << "a - b = " << a - b << '\n';
		break;
	case '+':
		std::cout << "a + b = " << a + b << '\n';
		break;
	case '*':
		std::cout << "a * b = " << a * b << '\n';
		break;
	case '/':
		std::cout << "a / b = " << a / b << '\n';
		break;
	default:
		std::cout << "Error\n";

		//Чувааак
	}
	return 0;
}
