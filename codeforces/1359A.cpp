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
    int n, m, k;
    cin >> n >> m >> k;

    int cardsPerPlayer = n / k;

    if (m < cardsPerPlayer)
    {
        cout << m << endl;
        return;
    }

    m -= cardsPerPlayer; // remove winners number of jokers from deck

    // distribute jokers among everyone equally
    int extraJokers = m % (k - 1); // remainder after equal distribution
    int jokersPerPlayer = m / (k - 1);

    // no extra jokers after distribution
    if (extraJokers == 0)
    {
        if (jokersPerPlayer == cardsPerPlayer)
        { // second player has all jokers
            cout << 0 << endl;
        }
        else
        {
            cout << cardsPerPlayer - jokersPerPlayer << endl;
        }
    }
    else
    {
        if (jokersPerPlayer + 1 == cardsPerPlayer)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << cardsPerPlayer - jokersPerPlayer - 1 << endl;
        }
    }
}