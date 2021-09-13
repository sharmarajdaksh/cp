#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool isSelfDividing(int n)
    {
        int _n = n;
        while (n > 0)
        {
            if (n % 10 == 0 || _n % (n % 10) != 0)
                return false;
            n /= 10;
        }
        return true;
    }

public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> ans;
        for (int i = left; i <= right; i++)
        {
            if (isSelfDividing(i))
                ans.push_back(i);
        }
        return ans;
    }
};

int main()
{
    Solution s = Solution();
    // assert();
}