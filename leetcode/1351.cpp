#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int ans = 0;
        for (vector<int> gr : grid)
        {
            // Naive brute force
            // for (int g : gr)
            // {
            //     ans += (g < 0 ? 1 : 0);
            // }
            ans += upper_bound(gr.rbegin(), gr.rend(), -1) - gr.rbegin();
        }
        return ans;
    }
};

int main()
{
    Solution s = Solution();
    // assert();
}