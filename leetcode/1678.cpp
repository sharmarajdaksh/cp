#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string interpret(string command)
    {
        int commandLength = command.length();
        int index = 0;

        string parserOutput = "";

        while (index < commandLength)
        {
            if (command[index] == 'G')
            {
                parserOutput += "G";
                index++;
            }
            else
            {
                if (command[index + 1] == ')')
                {
                    parserOutput += "o";
                    index += 2;
                }
                else
                {
                    parserOutput += "al";
                    index += 4;
                }
            }
        }

        return parserOutput;
    }
};

int main()
{
    Solution s = Solution();
    assert(s.interpret("G()(al)") == "Goal");
    assert(s.interpret("G()()()()(al)") == "Gooooal");
    assert(s.interpret("(al)G(al)()()G") == "alGalooG");
}