#include <iostream>

int main()
{
	int a;
	std::cin >> a;

	if (a % 10 == 1 || a % 10 == 3 || a % 10 == 5 || a % 10 == 7 || a % 10 == 9)
	{
		std::cout << "odd";
	}
	else {
		std::cout << "even";
	}
	return 0;
}