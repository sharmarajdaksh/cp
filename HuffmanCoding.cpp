#include <bits/stdc++.h>
using namespace std;

int main()
{
  cout << "HELLO";
  string s = "102hhn02h1m9a0hh21dmdbwd9hd903dh0bwbogd9bdsa8gd1 h0wdb0ndwqdwqm0mdwqdwqn0bwd 0qdb dwqh0 h[dwq d9whqwwqddqwd wqg bdwqbdbquwh bdwqodwq dqwu dh oqdbwbdwdjqwwdd wqwd wdbqjqdwbodwdqwgdwqg8dw 8 q7d8qwdqudw bqdwoqdwbdqww8d7q8dw7qb wd wqdwqd ywdqdwp hgefcvqwf8o7 f81 31fb";

  map<char, int> frequency_map;

  for (auto c : s)
  {
    map<char, int>::const_iterator it = frequency_map.find(c);
    if (it != frequency_map.end())
    {
      frequency_map[c]++;
    }
    else
    {
      frequency_map[c] = 1;
    }
  }

  return 0;
}