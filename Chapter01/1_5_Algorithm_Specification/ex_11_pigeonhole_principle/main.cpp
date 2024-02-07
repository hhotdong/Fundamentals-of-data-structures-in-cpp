#include <iostream>

int f(int input)
{
    return input;
}

int main(void)
{
    std::cout << "Enter number: ";
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i == j)
                continue;

            if (f(i) == f(j))
                std::cout << "(" << i << ", " << j << ")" << std::endl;
        }
    }
    return 0;
}
