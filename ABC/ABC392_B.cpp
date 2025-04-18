#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(m, 0);
	vector<bool> x(n + 5, true);
	for(int i = 0; i < m; i++) cin >> a[i];

	for(int i = 0; i < m; i++ ) {
		int xi = a[i];
		x[xi] = false;
	}

	cout << n - m << endl;

	for(int i = 1; i <= n; i++) {
		if(x[i]) cout << i << " ";
	}
	cout << endl;
	return 0;
}