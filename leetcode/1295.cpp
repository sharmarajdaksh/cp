#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int ans = 0;
        for (int num : nums)
        {
            if (to_string(num).length() % 2 == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s = Solution();
    // assert();
}