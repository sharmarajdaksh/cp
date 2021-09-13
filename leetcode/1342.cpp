#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfSteps(int num)
    {
        int stepsCount = 0;
        while (num > 0)
        {
            if (num % 2)
            {
                num--;
            }
            else
            {
                num /= 2;
            }
            stepsCount++;
        }
        return stepsCount;
    }
};

int main()
{
    Solution s = Solution();

    assert(s.numberOfSteps(14) == 6);
    assert(s.numberOfSteps(8) == 4);
    assert(s.numberOfSteps(123) == 12);
}