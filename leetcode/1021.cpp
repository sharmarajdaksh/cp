#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeOuterParentheses(string S)
    {
        int parenthesisCounter = 0;
        string primitiveString = "";
        string answerString = "";

        for (char c : S)
        {
            if (c == '(')
            {
                parenthesisCounter++;
            }
            else
            {
                parenthesisCounter--;
            }
            primitiveString += c;

            if (parenthesisCounter == 0)
            {
                int primitiveStringLength = primitiveString.length();
                answerString += primitiveString.substr(1, primitiveStringLength - 2);
                primitiveString = "";
            }
        }

        return answerString;
    }
};

int main()
{
    Solution s = Solution();
    assert(s.removeOuterParentheses("(()())(())") == "()()()");
    assert(s.removeOuterParentheses("(()())(())(()(()))") == "()()()()(())");
    assert(s.removeOuterParentheses("()()") == "");
}