#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using Graph = vector<vector<int>>;
const int COUNT = 1;


int main() {
	int n, m, ans = 0;
	cin >> n >> m;
	Graph G(n + 1);

	for(int i = 1; i < m + 1; i++) {
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	for(int i = 1; i < n + 1; i++) {
		sort(begin(G[i]), end(G[i]));
		int count = 0;
		bool flag = false;
		for(int j = 0; j < (int)G[i].size(); j++) {
				if(i > G[i][j]) {
					count++;
					if(count == COUNT) flag = true;
					if(count > COUNT) flag = false;
				}
		}
		if(flag) ans++;
	}
	cout << ans << endl;
}