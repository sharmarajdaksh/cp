#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {

        vector<int> output;
        int sum = 0;

        for (int num : nums)
        {
            sum += num;
            output.push_back(sum);
        }
        return output;
    }
};

int main()
{
    Solution s = Solution();

    vector<int> v1{1, 2, 3, 4};
    vector<int> s1{1, 3, 6, 10};
    vector<int> v2{1, 1, 1, 1, 1};
    vector<int> s2{1, 2, 3, 4, 5};
    vector<int> v3{3, 1, 2, 10, 1};
    vector<int> s3{3, 4, 6, 16, 17};
    assert(s.runningSum(v1) == s1);
    assert(s.runningSum(v2) == s2);
    assert(s.runningSum(v3) == s3);
}