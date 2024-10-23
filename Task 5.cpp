#include <iostream>

int main()
{
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	if ((a >= b || a <= b) && (b >= a, c || b <= a, c) && (c >= b, d || c <= b, d) && (d >= c, e || d <= c, e)) 
	{
		std::cout << "yes";
	}
	else {
		std::cout << "no";
	}
	return 0;
}