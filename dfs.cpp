#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;

int n, m, a, b;
vector<int> g[N];
set<int> s[2];
bool vis[N];

void dfs(int x, bool b) {
	s[b].insert(x);
	for (int v : g[x]) {
		if (vis[v]) continue;
		vis[v] = true;
		dfs(v, !b);
	}
	return;
}


int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		a--;
		b--;
		g[a].push_back(b);
		g[b].push_back(a);
	}

	for (int i = 0; i < n; i++) {
		if (!vis[i]) dfs(i, 1);
	}

	for (int i = 0; i < n; i++) {
		for (int v : g[i]) {
			for (int j = 0; j < 2; j++) {
				if (s[j].count(i) && s[j].count(v)) {
					cout << -1;
					return 0;
				}
			}
		}
	}

	for (int i = 0; i < 2; i++) {
		cout << s[i].size() << '\n';
		for (auto v : s[i]) cout << v + 1 << ' ';
		cout << '\n';
	}

	//system("PAUSE");
	return 0;

}
