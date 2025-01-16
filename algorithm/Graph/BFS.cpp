// コンパイルの際は g++ -std=c++11 BFS.cpp と記述すること．
// G[v] は頂点vに隣接している頂点を格納した1次元配列．
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
queue<int> que;


void bfs(const Graph &G, int v) {
	seen[v] = true;
	que.push(v);


	while(!que.empty()) {
		int v = que.front();
		que.pop();

		for(auto next_v : G[v]) {
			if(seen[next_v]) continue;

			seen[next_v] = true;
			que.push(next_v);
		}
	}
}

	int main() {
		int n, m;
		cin >> n >> m;

		Graph G(n);
		seen.assign(n, false);
		for(int i = 0; i < m; i++) {
			int a, b;
			cin >> a >> b;
			G[a].push_back(b);
			// G[b].push_back(a); // 無向グラフの際は必要
		}

		for(int v = 0; v < n; v++) {
			if(seen[v]) continue;
			bfs(G, v);
		}

		return 0;
}
