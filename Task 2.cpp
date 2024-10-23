#include <iostream>

int main() 
{
	double number1;
	double number2;
	char symbol;

	std::cin >> number1;
	std::cin >> number2;
	std::cin >> symbol;

	switch(symbol)
	{
	case '+': std::cout << (number1 + number2); break;
	case '-': std::cout << (number1 - number2); break;
	case '*': std::cout << (number1 * number2); break;
	case '/': std::cout << (number1 / number2);
	}
	return 0;
}
