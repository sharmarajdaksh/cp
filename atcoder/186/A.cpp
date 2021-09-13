#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxBricks(int maxWeight, int brickWeight)
    {
        return maxWeight / brickWeight;
    }
};

int main()
{
    int maxWeight, brickWeight;
    cin >> maxWeight >> brickWeight;

    Solution s = Solution();

    // assert(s.maxBricks(10, 3) == 3);
    // assert(s.maxBricks(1000, 1) == 1000);

    cout << s.maxBricks(maxWeight, brickWeight) << "\n";
}