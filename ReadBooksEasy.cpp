#include <bits/stdc++.h>
using namespace std;

void solve();

struct book
{
  long t;
  bool a, b;
};

int main()
{
  solve();

  return 0;
}

void solve()
{
  long n, k;
  cin >> n >> k;

  set<book> abooks, bbooks, abbooks, nbooks;
  book bt;

  for (long i = 0; i < n; i++)
  {
    cin >> bt.t >> bt.a >> bt.a;
    if (bt.a && bt.b)
      abbooks.insert(bt);
    else
    {
      if (bt.a)
        abooks.insert(bt);
      else if (bt.b)
        bbooks.insert(bt);
      else
      {
        nbooks.insert(bt);
      }
    }
  }

  if (abbooks.size() < k || bbooks.size() < k)
  {
    cout << '-1\n';
    return;
  }

  sort(abooks.begin(), abooks.end(), [](const auto &l, const auto &r) {
    return l.t < r.t;
  });
  sort(bbooks.begin(), bbooks.end(), [](const auto &l, const auto &r) {
    return l.t < r.t;
  });
  sort(abbooks.begin(), abbooks.end(), [](const auto &l, const auto &r) {
    return l.t < r.t;
  });

  long ac = 0, bc = 0;
  long tt = 0;

  for (auto b : abbooks)
  {
  }
}
// Incomplete