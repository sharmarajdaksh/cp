#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A)
    {
        vector<vector<int>> ans;
        for (vector<int> &a : A)
        {
            reverse(a.begin(), a.end());
            for (int &x : a)
            {
                x = !x;
            }
        }
        return A;
    }
};

int main()
{
    Solution s = Solution();
    vector<vector<int>> v1 = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    vector<vector<int>> a1 = {{1, 0, 0}, {0, 1, 0}, {1, 1, 1}};
    assert(s.flipAndInvertImage(v1) == a1);
}