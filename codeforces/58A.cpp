#include<bits/stdc++.h>
using namespace std;

int main() {
  string ss;
  cin >> ss;

  int ptr = 0;
  char letters[] = {'h', 'e', 'l', 'l', 'o'};

  for (char s: ss) {
    if (s == letters[ptr]) {
      ptr++;
    }

    if (ptr == 5) {
      cout << "YES\n";
      return 0;
    }
  }

  cout << "NO\n";
  return 0;
}
