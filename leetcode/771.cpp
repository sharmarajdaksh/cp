#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        int stonesCount = 0;
        for (char stone : J)
        {
            stonesCount += count(S.begin(), S.end(), stone);
        }

        return stonesCount;
    }
};

int main()
{
    Solution s = Solution();
    assert(s.numJewelsInStones("aA", "aAAbbbb") == 3);
    assert(s.numJewelsInStones("z", "ZZ") == 0);
}