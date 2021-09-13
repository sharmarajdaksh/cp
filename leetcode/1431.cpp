#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int existingMaximum = *max_element(candies.begin(), candies.end());

        vector<bool> canHaveGreatestCandies;
        for (int candy : candies)
        {
            if (candy + extraCandies >= existingMaximum)
            {
                canHaveGreatestCandies.push_back(true);
            }
            else
            {
                canHaveGreatestCandies.push_back(false);
            }
        }

        return canHaveGreatestCandies;
    }
};

int main()
{
    Solution s = Solution();

    vector<int> v1{2, 3, 5, 1, 3};
    vector<bool> s1{true, true, true, false, true};
    vector<int> v2{4, 2, 1, 1, 2};
    vector<bool> s2{true, false, false, false, false};
    vector<int> v3{12, 1, 12};
    vector<bool> s3{true, false, true};
    assert(s.kidsWithCandies(v1, 3) == s1);
    assert(s.kidsWithCandies(v2, 1) == s2);
    assert(s.kidsWithCandies(v3, 10) == s3);
}