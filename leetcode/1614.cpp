#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDepth(string s)
    {
        int maxNestingDepth = 0;
        int currentNestingDepth = 0;
        for (char c : s)
        {
            if (c == '(')
            {
                currentNestingDepth++;
                if (currentNestingDepth > maxNestingDepth)
                {
                    maxNestingDepth = currentNestingDepth;
                }
            }
            else if (c == ')')
            {
                currentNestingDepth--;
            }
        }

        return maxNestingDepth;
    }
};

int main()
{
    Solution s = Solution();
    assert(s.maxDepth("(1+(2*3)+((8)/4))+1") == 3);
    assert(s.maxDepth("(1)+((2))+(((3)))") == 3);
    assert(s.maxDepth("1+(2*3)/(2-1)") == 1);
    assert(s.maxDepth("1)") == 0);
}