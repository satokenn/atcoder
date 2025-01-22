#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, ans = 0;
	cin >> n;
	vector<int> h(n);
	for(int i = 0; i < n; i++) cin >> h[i];

	ans = h[0];
	for(int i = 1; i < n; i++) {
		if(ans < h[i]){
			ans = h[i];
		}
		else {
			cout << ans << endl;
			return 0;
		}
	}
	cout << ans << endl;
	return 0;
}