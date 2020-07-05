#include <bits/stdc++.h>
using namespace std;

void solve();
long long sumOfDigits(long long);

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
  int n;
  cin >> n;

  long long ai, bi, scoreA = 0, scoreB = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> ai >> bi;
    ai = sumOfDigits(ai);
    bi = sumOfDigits(bi);
    if (ai >= bi)
    {
      scoreA++;
    }
    if (bi >= ai)
    {
      scoreB++;
    }
  }

  if (scoreA == scoreB)
  {
    cout << 2 << " " << scoreA << '\n';
  }
  else if (scoreA > scoreB)
  {
    cout << 0 << " " << scoreA << '\n';
  }
  else if (scoreB > scoreA)
  {
    cout << 1 << " " << scoreB << '\n';
  }
}

long long sumOfDigits(long long n)
{
  long long sum = 0;
  while (n != 0)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}