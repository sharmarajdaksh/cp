#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string getCombinedString(vector<string> &stringVector)
    {
        string combinedString = "";
        for (string s : stringVector)
        {
            combinedString += s;
        }
        return combinedString;
    }

    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        return getCombinedString(word1) == getCombinedString(word2);
    }
};

int main()
{
    Solution s = Solution();
    vector<string> v11{"ab", "c"};
    vector<string> v12{"a", "bc"};
    vector<string> v21{"a", "cb"};
    vector<string> v22{"ab", "c"};
    vector<string> v31{"abc", "d", "defg"};
    vector<string> v32{"abcddefg"};
    assert(s.arrayStringsAreEqual(v11, v12));
    assert(!s.arrayStringsAreEqual(v21, v22));
    assert(s.arrayStringsAreEqual(v31, v32));
}