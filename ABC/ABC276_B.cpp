#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using Graph = vector<vector<int>>;


int main() {
	int n, m;
	cin >> n >> m;

	Graph G(n + 1);

	for(int i  = 1; i < m + 1; i++) {
		int a, b;
		cin >> a >> b;

		G[a].push_back(b);
		G[b].push_back(a);
	}


	for(int i = 1; i < n + 1; i++) {
		sort(begin(G[i]), end(G[i]));
	}

	for(int i = 1; i < n + 1; i++) {
		int s = (int)G[i].size();
		cout << s << ' ';
		for(int j = 0; j < s; j++) {
			cout << G[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}