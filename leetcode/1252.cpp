#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int oddCells(int n, int m, vector<vector<int>> &indices)
    {
        vector<bool> rows(n, false);
        vector<bool> cols(m, false);

        for (vector<int> index : indices)
        {
            rows[index[0]] = !rows[index[0]];
            cols[index[1]] = !cols[index[1]];
        }

        int rowCount = 0;
        int colCount = 0;

        for (bool r : rows)
        {
            if (r)
                rowCount++;
        }
        for (bool c : cols)
        {
            if (c)
                colCount++;
        }

        return rowCount * m + colCount * n - 2 * rowCount * colCount;
    }
};

int main()
{
    Solution s = Solution();
    // assert();
}