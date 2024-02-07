#include <iostream>
#include <cstring>

unsigned int ackermann(unsigned int m, unsigned int n)
{
    unsigned int arr[m + 1][n + 1];
    std::memset(arr, 0, (m + 1) * (n + 1));
    
    for (unsigned int row = 0; row <= m; ++row)
    {
        for (unsigned int col = 0; col <= n; ++col)
        {
            if (row == 0)
            {
                arr[row][col] = col + 1;
                continue;
            }

            if (col == 0)
            {
                arr[row][col] = arr[row - 1][1];
                continue;
            }
            
            unsigned int newCol = arr[row][col - 1];
            if (newCol > (n + 1))
            {
                
            }

            arr[row][col] = arr[row - 1][arr[row][col - 1]];
        }
    }
    return arr[m][n];
}

int main(void)
{
    std::cout << "Enter two numbers(m, n): ";
    unsigned int m, n;
    std::cin >> m >> n;

    std::cout << "Result: " << ackermann(m, n) << std::endl;
    return 0;
}
