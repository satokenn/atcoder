// 再帰関数を用いる深さ優先探索の実装の基本形
// G[v] は頂点vに隣接している頂点を格納している1次元配列
#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool>seen;

void dfs(const Graph&G, int v) {
	seen[v] = true;

	for(auto next_v : G[v]) {
		seen[next_v] = true;
		dfs(G, next_v);
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	Graph G(n);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			int a, b;
			cin >> a >> b;
			G[a].push_back(b);

		}
	}

	seen.assign(n, false);
	for(int v = 0; v < n; v++) {
		if(seen[v]) continue;
		dfs(G, v);
	}
}
