#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long n, w, ans = 0;
	cin >> n >> w;
	vector<pair<long long, long long>> cheese(n);

	for(int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		cheese.at(i) = make_pair(a, b);
	}
	sort(cheese.rbegin(), cheese.rend());

	for(int i = 0; i < n; i++) {
		if(w >= cheese[i].second) {
			ans += cheese[i].first * cheese[i].second;
			w -= cheese[i].second;
		}
		else {
			ans+= cheese[i].first * w;
			w = 0;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}	

