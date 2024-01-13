#include <iostream>

void print(int val0, int val1, int val2)
{
     std::cout << val0 << ", " << val1 << ", " << val2 << std::endl;
}

void swap(int* pa, int* pb)
{
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

// https://stackoverflow.com/a/4367793
void sort_increasing_order(int a, int b, int c)
{
    if (a > b)
        swap(&a, &b);

    if (a > c)
        swap(&a, &c);

    if (b > c)
        print(a, c, b);
    else
        print(a, b, c);
}

int main(void)
{
    std::cout << "Enter three numbers: ";

    int a, b, c;
    std::cin >> a >> b >> c;

    sort_increasing_order(a, b, c);

    return 0;
}
