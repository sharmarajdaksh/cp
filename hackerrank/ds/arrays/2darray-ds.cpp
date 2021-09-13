#include<bits/stdc++.h>
using namespace std;

const int SIZE = 6;

int main() {
  int arr[SIZE][SIZE] = {0};

  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      cin >> arr[i][j];
    }
  }

  int max_hg = -999;
  for (int i = 0; i < SIZE - 2; i++) {
    for (int j = 0; j < SIZE - 2; j++) {
      int hg = arr[i][j] + arr[i][j + 1] + arr[i][j + 2]
        + arr[i + 1][j + 1]
        + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
      max_hg = max(max_hg, hg);
    }
  }

  cout << max_hg << '\n';

  return 0;
}
