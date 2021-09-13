#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int minTimeBetweenTwoPoints(int a, int b, int x, int y)
    {
        // In order to minimize steps, we should walk most points diagonally.
        // If we cannot make a move then those points should be covered either
        // horizontally or vertically.
        // Example : Lets say |x2 - x1| = 5 and |y2 - y1| = 3, then we would
        // walk 3 diagonally and remaining two have to be walked horizontally.
        return max(abs(x - a), abs(y - b));
    }

public:
    int minTimeToVisitAllPoints(vector<vector<int>> &points)
    {
        int totalTime = 0;
        for (int i = 0; i < points.size() - 1; i++)
        {
            totalTime += minTimeBetweenTwoPoints(points[i][0], points[i][1], points[i + 1][0], points[i + 1][1]);
        }
        return totalTime;
    }
};

int main()
{
    Solution s = Solution();
    // assert();
}