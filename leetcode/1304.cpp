#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sumZero(int n)
    {
        vector<int> ans;
        if (n % 2)
        {
            ans.push_back(0);
            n--;
        }
        for (int i = 1; i < n / 2 + 1; i++)
        {
            ans.push_back(i);
            ans.push_back(-i);
        }
        return ans;
    }
};

int main()
{
    Solution s = Solution();
    // assert();
}