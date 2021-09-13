#include<bits/stdc++.h>
using namespace std;

int main() {

  int n, d;
  cin >> n >> d;

  int arr[n] = {0}, darr[n] = {0};

  d = d % n;
  
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    darr[(i + n - d) % n] = arr[i];
  }

  for (int i = 0; i < n; i++) {
    cout << darr[i] << " ";
  }
  
  cout << endl;

  return 0;
}
