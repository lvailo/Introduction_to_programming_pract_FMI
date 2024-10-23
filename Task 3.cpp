#include <iostream>

int main()
{
    char a;
    std::cin >> a;

    if (a >= '0' && a <= '9')
    {
        std::cout << "digit";
    }
    else if (a >= 'a' && a <= 'z')
    {
        std::cout << "lowercase letter";
    }
    else if (a >= 'A' && a <= 'Z')
    {
        std::cout << "uppercase letter";
    }
    else
    {
        std::cout << "other";
    }

    return 0;
}
