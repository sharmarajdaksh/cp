#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        int arrSize = nums.size();

        vector<int> targetArray;

        targetArray.push_back(nums[0]);
        for (int i = 1; i < arrSize; i++)
        {
            targetArray.insert(targetArray.begin() + index[i], nums[i]);
        }

        return targetArray;
    }
};

int main()
{
    Solution s = Solution();

    vector<int> n1{0, 1, 2, 3, 4};
    vector<int> i1{0, 1, 2, 2, 1};
    vector<int> o1{0, 4, 1, 3, 2};
    vector<int> n2{1, 2, 3, 4, 0};
    vector<int> i2{0, 1, 2, 3, 0};
    vector<int> o2{0, 1, 2, 3, 4};
    vector<int> n3{1};
    vector<int> i3{0};
    vector<int> o3{1};
    assert(s.createTargetArray(n1, i1) == o1);
    assert(s.createTargetArray(n2, i2) == o2);
    assert(s.createTargetArray(n3, i3) == o3);
}