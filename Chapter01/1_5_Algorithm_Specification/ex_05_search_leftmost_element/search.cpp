#include <iostream>

int search(const int* const arr, int len, int target)
{
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

void print_result(int* const arr, int len, int target)
{
    std::cout << "Given array : ";
    for (int i = 0; i < len; ++i)
    {
        std::cout << arr[i];
        if (i != len - 1)
            std::cout << ", ";
    }
    std::cout << std::endl;

    std::cout << "Index of leftmost target element: " << search(arr, len, target) << std::endl << std:: endl;
}

int main(void)
{
    int arr1[]  = { 1 };
    int arr2[]  = { 1, 1 };
    int arr3[]  = { 1, 1, 1 };
    int arr4[]  = { 0, 0, 1 };
    int arr5[]  = { 0, 0, 0, 0, 1, 1, 1, 1, 1 };
    int arr6[]  = { 1, 1, 1, 1, 1, 0, 0, 0, 0 };
    int arr7[]  = { 0, 1, 1, 1, 1, 0, 0, 0, 0 };
    int arr8[]  = { 0, 0, 1, 1, 1, 0, 0, 0, 0 };
    int arr9[]  = { 0, 0, 0, 1, 1, 0, 0, 0, 0 };
    int arr10[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int arr11[] = { 0, 1, 0, 0, 0, 0, 0, 0, 1 };

    int target = 1;
    std::cout << "Target value: " << target << std::endl << std::endl;

    print_result(arr1 , sizeof(arr1 )/sizeof(arr1 [0]), target);
    print_result(arr2 , sizeof(arr2 )/sizeof(arr2 [0]), target);
    print_result(arr3 , sizeof(arr3 )/sizeof(arr3 [0]), target);
    print_result(arr4 , sizeof(arr4 )/sizeof(arr4 [0]), target);
    print_result(arr5 , sizeof(arr5 )/sizeof(arr5 [0]), target);
    print_result(arr6 , sizeof(arr6 )/sizeof(arr6 [0]), target);
    print_result(arr7 , sizeof(arr7 )/sizeof(arr7 [0]), target);
    print_result(arr8 , sizeof(arr8 )/sizeof(arr8 [0]), target);
    print_result(arr9 , sizeof(arr9 )/sizeof(arr9 [0]), target);
    print_result(arr10, sizeof(arr10)/sizeof(arr10[0]), target);
    print_result(arr11, sizeof(arr11)/sizeof(arr11[0]), target);

    return 0;
}
