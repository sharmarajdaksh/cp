#include <bits/stdc++.h>
using namespace std;

class Solution
{
    const int aAscii = 97;

public:
    string freqAlphabets(string s)
    {
        unsigned int slen = s.length();
        string ans = "";
        int index = -1;
        char c = 'A';
        for (int i = slen - 1; i >= 0; i--)
        {
            if (s[i] == '#')
            {
                index = stoi(string(1, s[i - 2]) + s[i - 1]);
                c = index + aAscii - 1;
                ans = c + ans;
                i -= 2;
                continue;
            }
            index = stoi(string(1, s[i]));
            c = index + aAscii - 1;
            ans = c + ans;
        }
        return ans;
    }
};

int main()
{
    Solution s = Solution();
    assert(s.freqAlphabets("10#11#12") == "jkab");
    assert(s.freqAlphabets("1326#") == "acz");
    assert(s.freqAlphabets("25#") == "y");
    assert(s.freqAlphabets("12345678910#11#12#13#14#15#16#17#18#19#20#21#22#23#24#25#26#") == "abcdefghijklmnopqrstuvwxyz");
}