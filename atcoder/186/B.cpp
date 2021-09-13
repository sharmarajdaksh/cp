#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int blocksToRemove(vector<vector<int>> grid)
    {
        int minBlocks = 101;
        for (vector<int> row : grid)
        {
            int minBlock = *min_element(row.begin(), row.end());
            if (minBlock < minBlocks)
            {
                minBlocks = minBlock;
            }
        }

        int blocksCount = 0;
        for (vector<int> row : grid)
        {
            for (int block : row)
            {
                blocksCount += (block - minBlocks);
            }
        }
        return blocksCount;
    }
};

int main()
{
    Solution s = Solution();

    // vector<vector<int>> v1{
    //     {2, 2, 3},
    //     {3, 2, 2},
    // };
    // assert(s.blocksToRemove(v1) == 2);

    // vector<vector<int>> v2{
    //     {99, 99, 99},
    //     {99, 0, 99},
    //     {99, 99, 99},
    // };
    // assert(s.blocksToRemove(v2) == 792);

    // vector<vector<int>> v3{
    //     {4, 4},
    //     {4, 4},
    //     {4, 4},
    // };
    // assert(s.blocksToRemove(v3) == 0);

    int h, w;
    vector<vector<int>> grid;

    cin >> h >> w;
    for (int i = 0; i < h; i++)
    {
        vector<int> row;
        for (int j = 0; j < w; j++)
        {
            int block;
            cin >> block;
            row.push_back(block);
        }
        grid.push_back(row);
    }

    cout << s.blocksToRemove(grid) << '\n';
}