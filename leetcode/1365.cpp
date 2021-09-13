#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> smallerNumbersThanCurrentNaive(vector<int> &nums)
    {
        vector<int> numsCopy(nums);
        vector<int> resultsVector;
        sort(numsCopy.begin(), numsCopy.end());
        for (int num : nums)
        {
            resultsVector.push_back(distance(numsCopy.begin(), find(numsCopy.begin(), numsCopy.end(), num)));
        }

        return resultsVector;
    }

    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> resultsVector;
        int counts[101] = {0};
        for (int num : nums)
        {
            counts[num]++;
        }
        for (unsigned int i = 1; i < 101; i++)
        {
            counts[i] += counts[i - 1];
        }
        for (int num : nums)
        {
            if (num == 0)
            {
                resultsVector.push_back(0);
                continue;
            }
            resultsVector.push_back(counts[num - 1]);
        }

        return resultsVector;
    }
};

int main()
{
    Solution s = Solution();

    vector<int> v1{8, 1, 2, 2, 3};
    vector<int> s1{4, 0, 1, 1, 3};
    vector<int> v2{6, 5, 4, 8};
    vector<int> s2{2, 1, 0, 3};
    vector<int> v3{7, 7, 7, 7};
    vector<int> s3{0, 0, 0, 0};
    assert(s.smallerNumbersThanCurrent(v1) == s1);
    assert(s.smallerNumbersThanCurrent(v2) == s2);
    assert(s.smallerNumbersThanCurrent(v3) == s3);
}