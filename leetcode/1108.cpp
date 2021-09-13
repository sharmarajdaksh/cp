#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string defangIPaddr(string address)
    {
        string defangedIPAddr = "";
        for (char c : address)
        {
            if (c == '.')
            {
                defangedIPAddr += "[.]";
            }
            else
            {
                defangedIPAddr += c;
            }
        }
        return defangedIPAddr;
    }
};

int main()
{
    Solution s = Solution();

    assert(s.defangIPaddr("1.1.1.1") == "1[.]1[.]1[.]1");
    assert(s.defangIPaddr("255.100.50.0") == "255[.]100[.]50[.]0");
}