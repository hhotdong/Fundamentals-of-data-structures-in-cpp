#include <iostream>

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main(void)
{
    std::cout << "Enter number for factorial: ";
    int num;
    std::cin >> num;
    std::cout << "Result: " << factorial(num) << std::endl;
    return 0;
}
