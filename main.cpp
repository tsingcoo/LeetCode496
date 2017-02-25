#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    std::vector<int> res;
    std::vector<int> findNums = {1, 3, 5, 2, 4};
    std::vector<int> nums = {6, 5, 4, 3, 2, 1, 7};
    res = s.nextGreaterElement(findNums, nums);
    for (auto r: res) {
        std::cout << r << " ";
    }
    return 0;
}