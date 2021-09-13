#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> directions = {
	{1, 0},
	{-1, 0},
	{0, -1},
	{0, 1}
};

void dfs(vector<vector<int>>& t, int i, int j, int n) {
	stack<pair<int, int>> t;
	t.push_back({i, j});

	while (!stack.empty()) {
		pair<int, int> p = stack.top();
		if (p == '.') continue;
		t[p.first][p.second] = '.';

		for (auto direction: directions) {
			pair<int, int> np = {p.first + direction.first, p.second + direction.second};
			if (np.first > 0 && np.second > 0 && np.first < n && np.second < n && t[np.first][np.second] == '#') {
				stack.push_back({np.first, np.second});
			}
		}
	}
}


void removeS(vector<vector<int>>& t, int n) {
	 for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (t[i][j] == '#') {
				dfs(t, i, j, n);
				return;
			}
		}
	}
}

void removeT(vector<vector<int>>& s, vector<vector<int>>& t, int n) {
	 for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (s[i][j] == '#' && t[i][j] == '#') {
				dfs(s, i, j, n);
				return;
			}
		}
	}
}

bool compare(vector<vector<int>>& s, vector<vector<int>>& t, n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (s[i][j] != t[i][j]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	vector<vector<int>> s(n, vector<int>(n));
	vector<vector<int>> t(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> s[i][j];
			t[i][j] = s[i][j];
		}
	}

	removeS(t, n);
	removeT(s, t, n);

	if (compare(s, t, n)) {
		cout << "Yes" << endl;		
	}

}