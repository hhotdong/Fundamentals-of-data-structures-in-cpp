#include <iostream>

int main (void)
{
    std::cout << "Enter number: ";
    int n;
    std::cin >> n;

    int sum = 0;
    for (int i = 1; i < n; ++i)
    {
        if (n % i == 0)
            sum += i;
    }

    std::cout << (sum == n ? "Same as the sum of divisors" : "Not same as the sum of divisors") << std::endl;

    return 0;
}
