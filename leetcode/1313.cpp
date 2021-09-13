#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        vector<int> decompressedList;
        int numsSize = nums.size();
        for (int i = 0; i < numsSize; i += 2)
        {
            for (int j = 0; j < nums[i]; j++)
            {
                decompressedList.push_back(nums[i + 1]);
            }
        }

        return decompressedList;
    }
};

int main()
{
    Solution s = Solution();

    vector<int> v1{1, 2, 3, 4};
    vector<int> s1{2, 4, 4, 4};
    vector<int> v2{1, 1, 2, 3};
    vector<int> s2{1, 3, 3};
    assert(s.decompressRLElist(v1) == s1);
    assert(s.decompressRLElist(v2) == s2);
}