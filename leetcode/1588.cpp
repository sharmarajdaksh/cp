#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOddLengthSubarrays(vector<int> &arr)
    {
        int arrLength = arr.size();
        int subArrLength = 1;

        int oddLengthSubarraysSum = 0;

        while (subArrLength <= arrLength)
        {
            for (int i = 0; i < arrLength - subArrLength + 1; i++)
            {
                for (int j = 0; j < subArrLength; j++)
                {
                    oddLengthSubarraysSum += arr[i + j];
                }
            }
            subArrLength += 2;
        }

        return oddLengthSubarraysSum;
    }
};

int main()
{
    Solution s = Solution();
    vector<int> v1{1, 4, 2, 5, 3};
    assert(s.sumOddLengthSubarrays(v1) == 58);
    vector<int> v2{1, 2};
    assert(s.sumOddLengthSubarrays(v2) == 3);
    vector<int> v3{10, 11, 12};
    assert(s.sumOddLengthSubarrays(v3) == 66);
}