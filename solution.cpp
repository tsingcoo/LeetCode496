//
// Created by 王青龙 on 2017/2/25.
//

#include <unordered_map>
#include <stack>
#include "solution.h"

std::vector<int> Solution::nextGreaterElement(std::vector<int> &findNums, std::vector<int> &nums) {
    std::unordered_map<int, int> m;
    std::stack<int> s;
    for (auto n: nums) {
        while (s.size() && s.top() < n) {
            m.insert({s.top(), n});
            s.pop();
        }
        s.push(n);
    }
    std::vector<int> res;
    for (auto n:findNums) {
        if (m.find(n) != m.end()) {
            res.push_back(m[n]);
        } else {
            res.push_back(-1);
        }
    }
    return res;
}
