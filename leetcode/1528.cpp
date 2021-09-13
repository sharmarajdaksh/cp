#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        string finalString = "";
        for (int i = 0; i < s.length(); i++)
        {
            finalString += " ";
        }
        for (int i = 0; i < s.length(); i++)
        {
            finalString[indices[i]] = s[i];
        }

        return finalString;
    }
};

int main()
{
    Solution s = Solution();

    vector<int> v1{4, 5, 6, 7, 0, 2, 1, 3};
    vector<int> v2{0, 1, 2};
    vector<int> v3{3, 1, 4, 2, 0};
    assert(s.restoreString("codeleet", v1) == "leetcode");
    assert(s.restoreString("codeleet", v1) == "leetcode");
    assert(s.restoreString("codeleet", v1) == "leetcode");
}