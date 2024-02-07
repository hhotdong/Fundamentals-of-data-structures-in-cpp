#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> PowerSet(const std::string* set, int n, int size)
{
    if (n == size)
    {
        std::vector<std::string> ret;
        ret.push_back("");
        return ret;
    }
    
    std::string              elem = set[n];
    std::vector<std::string> subsetWithoutElem(PowerSet(set, n + 1, size));
    
    std::vector<std::string> ret;
    for (int i = 0; i < subsetWithoutElem.size(); ++i)
    {
        ret.push_back(elem + subsetWithoutElem[i]);
        ret.push_back(subsetWithoutElem[i]);
    }
    return ret;
}

int main(void)
{
    std::string set[] = { "a", "b", "c" };
    std::vector<std::string> result = PowerSet(set, 0, sizeof(set)/sizeof(set[0]));
    for (int i = 0; i < result.size(); ++i)
        std::cout << result[i] << std::endl;

    return 0;
}
