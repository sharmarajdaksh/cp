#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int consistentStringsCount = 0;
        for (string word : words)
        {
            int wordLength = word.length();
            int allowedWordsCount = 0;
            for (char c : allowed)
            {
                allowedWordsCount += count(word.begin(), word.end(), c);
            }

            if (allowedWordsCount == wordLength)
            {
                consistentStringsCount++;
            }
        }

        return consistentStringsCount;
    }
};

int main()
{
    Solution s = Solution();
    vector<string> v1{"ad", "bd", "aaab", "baa", "badab"};
    assert(s.countConsistentStrings("ab", v1) == 2);

    vector<string> v2{"a", "b", "c", "ab", "ac", "bc", "abc"};
    assert(s.countConsistentStrings("abc", v2) == 7);

    vector<string> v3{"cc", "acd", "b", "ba", "bac", "bad", "ac", "d"};
    assert(s.countConsistentStrings("cad", v3) == 4);
}