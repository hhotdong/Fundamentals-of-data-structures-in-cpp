#include <iostream>

unsigned int ackermann(unsigned int m, unsigned int n)
{
    if (m == 0)
        return n + 1;
    
    if (n == 0)
        return ackermann(m - 1, 1);
    
    return ackermann(m - 1, ackermann(m, n - 1));
}

int main(void)
{
    std::cout << "Enter two numbers(m, n): ";
    unsigned int m, n;
    std::cin >> m >> n;

    std::cout << "Result: " << ackermann(m, n) << std::endl;
    return 0;
}
