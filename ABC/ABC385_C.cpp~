#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> h(n);
	for(int i = 0; i < n; i++) cin >> h[i];
	
	int ans = 0;
	for(int w = 1; w <= n; w++) {
		for(int si = 0; si < w; ++si) {
			vector<int> a;
			for(int i = si; i < n; i += w) {
				a.push_back(h[i]);
			}

			int val = -1, len = 0;
			for(int x : a) {
				if (val == x) len++;
				else val = x, len = 1;
				ans = max(ans, len);
			}
		}
	}
	cout << ans << endl;
	return 0;
}

