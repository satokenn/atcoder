#include <iostream>
#include <vector>
using namespace std;

void search(const Graph &G, int s) {
	int n = (int)G.size();
	vector<bool> seen(n, false);
	queue<int> todo;

	// 初期状態
	seen[s] = true;
	todo.push(s);

	while(!todo.empty()) {
		int v = todo.front();
		todo.pop();

		for(int x : G[v]) {
			if(seen[s]) continue;

			seen[x] = true;
			todo.push(x);
		}
	}
}