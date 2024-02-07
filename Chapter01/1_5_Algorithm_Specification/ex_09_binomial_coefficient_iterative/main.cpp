#include <iostream>

int min(int a, int b)
{
    return (a < b) ? a : b;
}

// https://www.geeksforgeeks.org/binomial-coefficient-dp-9/
int binomial_coefficient(int n, int k)
{
    int C[n + 1][k + 1];
    int i, j;
 
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
    return C[n][k];
}
 
int main(void)
{
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "Result: " << binomial_coefficient(num1, num2) << std::endl; 
    return 0;
}
