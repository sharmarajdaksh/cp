#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int side = mat.size();
        int sum = 0;
        for (int i = 0; i < side; i++)
        {
            int rr = side - 1 - i;
            sum += mat[i][i] + mat[rr][i];
        }
        if (side % 2 == 1)
        {
            int center = side / 2;
            sum -= mat[center][center];
        }
        return sum;
    }
};

int main()
{
    Solution s = Solution();
    // assert();
}