#include <iostream>

void combination(bool* const arr, const int len, int n)
{
    if (n == len)
    {
        std::cout << std::boolalpha;
        for (int i = 0; i < len; ++i)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
        return;
    }
    arr[n] = true;
    combination(arr, len, n + 1);
    arr[n] = false;
    combination(arr, len, n + 1);
}

int main()
{
    bool arr[5] = { false };
    int  len    = sizeof(arr) / sizeof(arr[0]);
    combination(arr, len, 0);
    return 0;
}
