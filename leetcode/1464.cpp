#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int largest = 0;
        int secondLargest = 0;
        for (int num : nums)
        {
            if (num > largest)
            {
                secondLargest = largest;
                largest = num;
            }
            else if (num > secondLargest)
            {
                secondLargest = num;
            }
        }
        return ((largest - 1) * (secondLargest - 1));
    }
};

int main()
{
    Solution s = Solution();
    vector<int> v1{3, 4, 5, 2};
    assert(s.maxProduct(v1) == 12);
}