#include <bits/stdc++.h>
using namespace std;

#define inf 1023456789
#define linf 1023456789123456789ll
#define pii pair<int, int>
#define pipii pair<int, pii>
#define pll pair<long long, long long>
#define vint vector<int>
#define vvint vector<vint>
#define ll long long
#define pdd pair<double, double>

#define DEBUG
#ifdef DEBUG
#define db(x) cerr << #x << " = " << x << endl
#else
#define db(x)
#endif

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int yq, xq;
    scanf("%d %d", &yq, &xq);
    int mini[4], maxi[4];
    mini[0] = yq - n;
    maxi[0] = yq - 1;
    mini[1] = max(yq - n, 1 - xq);
    maxi[1] = min(yq - 1, n - xq);
    mini[2] = 1 - xq;
    maxi[2] = n - xq;
    mini[3] = max(1 - yq, 1 - xq);
    maxi[3] = min(n - yq, n - xq);
    int dX[4] = {0, 1, 1, 1}, dY[4] = {-1, -1, 0, 1};
    for (int i = 0; i < k; i++)
    {
        int y, x;
        scanf("%d %d", &y, &x);
        x -= xq;
        y -= yq;
        for (int smer = 0; smer < 4; smer++)
        {
            if (y * dX[smer] - x * dY[smer] == 0)
            {
                int dist = (y * dY[smer] + x * dX[smer]) / (dY[smer] * dY[smer] + dX[smer] * dX[smer]);
                if (dist < 0)
                {
                    mini[smer] = max(mini[smer], dist + 1);
                }
                else
                {
                    maxi[smer] = min(maxi[smer], dist - 1);
                }
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < 4; i++)
        sum += maxi[i] - mini[i];
    printf("%d\n", sum);
    return 0;
}