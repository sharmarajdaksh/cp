#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int balancedStringSplit(string s)
    {
        char currChar = s[0];
        int currCount = 0;
        int balancedStringSplits = 0;
        for (char c : s)
        {
            if (currCount == 0)
            {
                balancedStringSplits++;

                currChar = c;
                currCount = 1;
            }
            else
            {
                if (c == currChar)
                {
                    currCount++;
                }
                else
                {
                    currCount--;
                }
            }
        }

        return balancedStringSplits;
    }
};

int main()
{
    Solution s = Solution();
    assert(s.balancedStringSplit("RLRRLLRLRL") == 4);
    assert(s.balancedStringSplit("RLLLLRRRLR") == 3);
    assert(s.balancedStringSplit("LLLLRRRR") == 1);
    assert(s.balancedStringSplit("RLRRRLLRLL") == 2);
}