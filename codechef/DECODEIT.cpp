#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{

    int testCases;
    cin >> testCases;

    while (testCases)
    {
        solve();

        testCases--;
    }

    return 0;
}

void solve()
{
    map<string, char> charMap = {
        {"0000", 'a'},
        {"0001", 'b'},
        {"0010", 'c'},
        {"0011", 'd'},
        {"0100", 'e'},
        {"0101", 'f'},
        {"0110", 'g'},
        {"0111", 'h'},
        {"1000", 'i'},
        {"1001", 'j'},
        {"1010", 'k'},
        {"1011", 'l'},
        {"1100", 'm'},
        {"1101", 'n'},
        {"1110", 'o'},
        {"1111", 'p'},
    };

    long n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i += 4)
    {
        cout << charMap[s.substr(i, 4)];
    }

    cout << endl;
}