#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> result(2 * n, 0);
        for (int i = 0; i < n; i++)
        {
            result.push_back(nums[i]);
            result.push_back(nums[n + i]);
        }

        return result;
    }
};

int main()
{
    Solution s = Solution();

    vector<int> v1{2, 5, 1, 3, 4, 7};
    vector<int> s1{2, 3, 5, 4, 1, 7};
    vector<int> v2{1, 2, 3, 4, 4, 3, 2, 1};
    vector<int> s2{1, 4, 2, 3, 3, 2, 4, 1};
    vector<int> v3{1, 1, 2, 2};
    vector<int> s3{1, 2, 1, 2};
    assert(s.shuffle(v1, 3) == s1);
    assert(s.shuffle(v2, 4) == s2);
    assert(s.shuffle(v3, 2) == s3);
}