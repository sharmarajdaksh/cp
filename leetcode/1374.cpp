#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string generateTheString(int n)
    {
        string ans = "";
        if (n % 2 == 0)
        {
            ans += "b";
            n--;
        }
        for (int i = 0; i < n; i++)
        {
            ans += "a";
        }
        return ans;
    }
};

int main()
{
    Solution s = Solution();
    // assert();
}