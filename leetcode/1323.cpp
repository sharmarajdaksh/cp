#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximum69Number(int num)
    {
        int tenPower = -1;
        int numCopy = num;
        for (int i = 0; num > 0; i++)
        {
            if (num % 10 == 6)
            {
                tenPower = i;
            }
            num /= 10;
        }
        if (tenPower == -1)
        {
            return numCopy;
        }
        else
        {
            return numCopy + 3 * pow((double)10, (double)tenPower);
        }
    }
};

int main()
{
    Solution s = Solution();
    // assert();
}