#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string destCity(vector<vector<string>> &paths)
    {
        set<string> startingCities;
        for (vector<string> path : paths)
        {
            startingCities.insert(path[0]);
        }
        for (vector<string> path : paths)
        {
            if (startingCities.find(path[1]) == startingCities.end())
            {
                return path[1];
            }
        }
        return "";
    }
};

int main()
{
    Solution s = Solution();
    // assert();
}