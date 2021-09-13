#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int numsLength = nums.size();
        int goodCount = 0;
        for (int i = 0; i < numsLength - 1; i++)
        {
            for (int j = i + 1; j < numsLength; j++)
            {
                if (nums[i] == nums[j])
                    goodCount++;
            }
        }

        return goodCount;
    }
};

int main()
{
    Solution s = Solution();

    vector<int> v1{1, 2, 3, 1, 1, 3};
    vector<int> v2{1, 1, 1, 1};
    vector<int> v3{1, 2, 3};
    assert(s.numIdenticalPairs(v1) == 4);
    assert(s.numIdenticalPairs(v2) == 6);
    assert(s.numIdenticalPairs(v3) == 0);
}