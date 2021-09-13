#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int busyStudent(vector<int> &startTime, vector<int> &endTime, int queryTime)
    {
        int l = startTime.size();
        int ans = 0;
        for (int i = 0; i < l; i++)
        {
            if (startTime[i] <= queryTime && endTime[i] >= queryTime)
            {
                ans++;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s = Solution();

    vector<int> v11{1, 2, 3};
    vector<int> v12{3, 2, 7};
    assert(s.busyStudent(v11, v12, 4) == 1);
    vector<int> v21{4};
    vector<int> v22{4};
    assert(s.busyStudent(v21, v22, 4) == 1);
}