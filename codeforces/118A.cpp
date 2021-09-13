#include<bits/stdc++.h>
using namespace std;

bool isVowel(char s) {
  return s == 'a' || s == 'A' || s == 'o' || s == 'O'
          || s == 'e' || s == 'E' || s == 'i' || s == 'I'
          || s == 'u' || s == 'U' || s == 'y' || s == 'Y';
}

int main() {

  string ss;
  cin >> ss;
  
  for (char s: ss) {
    if (isVowel(s)) continue;

    cout << '.';
    if (s < 'a') {
      cout << char(s + 'a' - 'A');
    } else {
      cout << s;
    }
  }

  cout << endl;

  return 0;
}
