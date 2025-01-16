#include <iostream>
#include <vector>
using namespace std;

const long long INF = 1LL << 60;

struct Edge {
	int to;
	long long w;
	Edge(int to, long long w) : to(to), w(w) {}
};


using Graph = vector<vector<Edge>>;

template<class T>bool chmin(T & a, T b) {
	if(a > b) {
		a = b;
		return true;
	}
	else return false;
}

int main() {
	int n , m, s;
	cin >> n >> m >> s;

	Graph G(n);
	for(int i = 0; i < m; i++) {
		int a, b, w;
		cin >> a >> b >> w;
		G[a].push_back(Edge(b, w));
	}
	vector<bool> used(n, false);
	vector<long long> dist(n, INF);
	dist[s] = 0;
	for(int iter = 0; iter < n; iter++) {
		long long min_dist = INF;
		int min_v = -1;

		for(int v = 0; v < n; v++) {
			if(!used[v] && dist[v] < min_dist) {
				min_dist = dist[v];
				min_v = v;
			}
		}
		if(min_v == -1) break;

		for(auto e : G[min_v]) {
			chmin(dist[e.to], dist[min_v] + e.w);
		}
		used[min_v] = true;
	}
	for(int v = 0; v < n; v++) {
		if(dist[v] < INF) cout << dist[v] << endl;
		else cout << "INF" << endl;
	}
}