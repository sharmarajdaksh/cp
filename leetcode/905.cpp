#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &A)
    {
        vector<int> ans(A.size(), 0);
        int fwd = 0;
        int bwd = A.size() - 1;
        for (int a : A)
        {
            if (a % 2 == 0)
            {
                ans[fwd] = a;
                fwd++;
            }
            else
            {
                ans[bwd] = a;
                bwd--;
            }
        }
        return ans;

        // ALT
        auto is_even = [](auto e) { return e % 2 == 0; };
        partition(A.begin(), A.end(), is_even);
        return A;
    }
};