#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::vector <int> input = {1, 87, 2, 0, -8,  34};
    std::cout << solution.K_MaxElement(input, 2) << std::endl;

    return EXIT_SUCCESS;
}