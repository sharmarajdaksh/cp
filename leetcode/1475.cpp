#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> finalPrices(vector<int> &prices)
    {
        vector<int> ans(prices.size());
        vector<int> seen(prices.size());
        for (int i = prices.size() - 1; i >= 0; i--)
        {
            seen[i] = prices[i];
            bool f = false;
            for (int j = i + 1; j < prices.size(); j++)
            {
                if (seen[j] <= prices[i])
                {
                    ans[i] = prices[i] - seen[j];
                    f = true;
                    break;
                }
            }
            if (f)
                continue;

            ans[i] = prices[i];
        }

        return ans;
    }
};

int main()
{
    Solution s = Solution();

    vector<int> v1{8, 4, 6, 2, 3};
    vector<int> s1{4, 2, 4, 2, 3};
    assert(s.finalPrices(v1) == s1);
}