#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string toLowerCase(string str)
    {
        for (unsigned int i = 0; i < str.length(); i++)
        {
            if (str[i] > 64 && str[i] < 91)
            {
                str[i] += (32);
            }
        }
        return str;
    }
};

int main()
{
    Solution s = Solution();
    assert(s.toLowerCase("HELLO") == "hello");
    assert(s.toLowerCase("HeLLo") == "hello");
}