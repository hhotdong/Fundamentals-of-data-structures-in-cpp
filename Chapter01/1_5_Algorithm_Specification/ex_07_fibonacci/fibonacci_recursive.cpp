#include <iostream>

int fibonacci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    std::cout << "Enter number for fibonacci: ";
    int num;
    std::cin >> num;
    std::cout << "Result: " << fibonacci(num) << std::endl;
    return 0;
}
