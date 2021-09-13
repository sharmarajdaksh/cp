#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfMatches(int n)
    {
        int matchesCount = 0;
        while (n > 1)
        {
            if (n % 2 == 1)
            {
                matchesCount += ((n - 1) / 2);
                n = ((n - 1) / 2) + 1;
            }
            else
            {
                matchesCount += (n / 2);
                n = n / 2;
            }
        }
        return matchesCount;
    }
};

int main()
{
    Solution s = Solution();
    assert(s.numberOfMatches(7) == 6);
    assert(s.numberOfMatches(14) == 13);
}