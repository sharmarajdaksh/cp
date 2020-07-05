#include <bits/stdc++.h>
using namespace std;

void dfs(int, int);

long n, m, valid_paths = 0;
vector<int> graph[1000000];
int visited[1000000] = {0};
int has_cat[1000000] = {0};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for (long i = 0; i < n; i++) {
        cin >> has_cat[i];
    }

    long a, b;
    for (int i = 0; i < n - 1; i++) {
        cin >> a >> b;
        graph[a - 1].push_back(b - 1);
        graph[b - 1].push_back(a - 1);
    }

    dfs(0, has_cat[0]);

    cout << valid_paths << '\n';

    return 0;
}

void dfs(int current, int cats) {
    visited[current] = 1;
    if (cats > m) return;

    bool leaf = true;
    for (unsigned long i = 0; i < graph[current].size(); i++) {
        int cats_tmp = cats;
        if (!visited[graph[current][i]]) {
            if(has_cat[graph[current][i]]) {
                    cats_tmp += 1;
            }
            else cats_tmp = 0;

            dfs(graph[current][i], cats_tmp);
            leaf = false;
        }
    }

    if (leaf) {
        valid_paths++;
    }
}
