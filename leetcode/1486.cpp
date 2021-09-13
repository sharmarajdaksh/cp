#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int sol = start + 2 * 0;
        for (int i = 1; i < n; i++)
        {
            sol ^= (start + 2 * i);
        }
        return sol;
    }
};

int main()
{
    Solution s = Solution();
    assert(s.xorOperation(5, 0) == 8);
    assert(s.xorOperation(4, 3) == 8);
    assert(s.xorOperation(1, 7) == 7);
    assert(s.xorOperation(10, 5) == 2);
}