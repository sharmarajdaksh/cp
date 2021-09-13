#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string sortString(string s)
    {
        vector<int> freq(26, 0);
        for (char c : s)
        {
            freq[c - 'a']++;
        }

        string ans = "";
        while (ans.size() != s.size())
        {
            for (int i = 0; i < 26; i++)
            {
                if (freq[i]-- > 0)
                {
                    ans += (char)('a' + i);
                }
            }
            for (int i = 25; i >= 0; i--)
            {
                if (freq[i]-- > 0)
                {

                    ans += (char)('a' + i);
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution s = Solution();
    assert(s.sortString("aaaabbbbcccc") == "abccbaabccba");
    assert(s.sortString("rat") == "art");
    assert(s.sortString("leetcode") == "cdelotee");
    assert(s.sortString("ggggggg") == "ggggggg");
}