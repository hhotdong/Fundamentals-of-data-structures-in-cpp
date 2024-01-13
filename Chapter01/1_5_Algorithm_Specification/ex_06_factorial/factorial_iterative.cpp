#include <iostream>

int factorial(int n)
{
    int ret = 1;
    for (int i = 1; i <= n; ++i)
        ret *= i;
    return ret;
}

int main(void)
{
    std::cout << "Enter number for factorial: ";
    int num;
    std::cin >> num;
    std::cout << "Result: " << factorial(num) << std::endl;
    return 0;
}
