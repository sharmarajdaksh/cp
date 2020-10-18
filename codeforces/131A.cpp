#include <bits/stdc++.h>
using namespace std;

void solve();
bool isCompletelyUppercase(string);
char invertCharCase(char);
string invertStringCase(string);

int main()
{
  solve();

  return 0;
}

void solve()
{
  string inputString, trailingString;
  cin >> inputString;

  if (islower(inputString[0]))
  {
    trailingString = inputString.substr(1, inputString.length() - 1);
  }
  else
  {
    trailingString = inputString;
  }

  cout << (isCompletelyUppercase(trailingString) ? invertStringCase(inputString) : inputString) << '\n';
}

char invertCharCase(char c)
{
  return isupper(c) ? tolower(c) : toupper(c);
}

string invertStringCase(string s)
{
  transform(s.begin(), s.end(), s.begin(), invertCharCase);
  return s;
}

bool isCompletelyUppercase(string s)
{
  for (char c : s)
  {
    if (islower(c))
    {
      return false;
    }
  }
  return true;
}