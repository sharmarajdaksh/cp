#include<bits/stdc++.h>
using namespace std;

const unordered_map<char, char> COMPLEMENTS = {
    {'A', 'T'},
    {'T', 'A'},
    {'C', 'G'},
    {'G', 'C'}
};

void printReverseComplement(string s) {
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++) {
        s[i] = COMPLEMENTS.at(s[i]);
    }
    cout << s << endl;
}

int main(int argc, char *a[])
{
    string input;
    cin >> input;
    printReverseComplement(input);
}
