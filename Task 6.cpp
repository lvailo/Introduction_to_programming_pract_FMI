#include <iostream>
#include <cmath>

int main()
{
    double a, b;
    int radius;
    std::cin >> a >> b >> radius;

    double c = radius * sin(45 * 3.14 / 180.0);

    if (a + b < c * 2)
    {
        std::cout << "Inside the circle";
    }
    else if (a + b == c * 2)
    {
        std::cout << "On the circle";
    }
    else
    {
        std::cout << "Outside the circle";
    }

    return 0;
}
