#include <bits/stdc++.h>
using namespace std;

class Solution
{
    const string morseCharacters[26] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

    string morseRepresentation(string s)
    {
        string morse = "";
        for (char c : s)
        {
            morse += morseCharacters[c - 97];
        }
        return morse;
    }

public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        set<string> s;
        for (string word : words)
        {
            s.insert(morseRepresentation(word));
        }
        return s.size();
    }
};

int main()
{
    Solution s = Solution();
    // assert();
}