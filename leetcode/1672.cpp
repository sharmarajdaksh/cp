#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int maximumWealth = 0;
        for (vector<int> account : accounts)
        {
            int personWealth = 0;
            for (int amount : account)
            {
                personWealth += amount;
            }
            if (personWealth > maximumWealth)
            {
                maximumWealth = personWealth;
            }
        }
        return maximumWealth;
    }
};

int main()
{
    Solution s = Solution();

    vector<vector<int>> v1{{1, 2, 3}, {3, 2, 1}};
    vector<vector<int>> v2{{1, 5}, {7, 3}, {3, 5}};
    vector<vector<int>> v3{{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};
    assert(s.maximumWealth(v1) == 6);
    assert(s.maximumWealth(v2) == 10);
    assert(s.maximumWealth(v3) == 17);
}