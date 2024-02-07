#include <iostream>

int fibonacci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    int pp = 0;
    int p  = 1; 

    for (int i = 2; i < n ; ++i)
    {
        int next_p = pp + p;
        pp = p;
        p  = next_p;
    }
    return pp + p;
}

int main(void)
{
    std::cout << "Enter number for fibonacci: ";
    int num;
    std::cin >> num;
    std::cout << "Result: " << fibonacci(num) << std::endl;
    return 0;
}
