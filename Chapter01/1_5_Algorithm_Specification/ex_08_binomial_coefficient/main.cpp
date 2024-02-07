#include <iostream>

double binomial_coefficient(int n, int m)
{
    if (m == 0 || n == m)
        return 1.0;
    return binomial_coefficient(n - 1, m) + binomial_coefficient(n - 1, m - 1);
}

int main(void)
{
    std::cout << "Enter two numbers: ";
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << "Result: " << binomial_coefficient(num1, num2) << std::endl;
    return 0;
}
