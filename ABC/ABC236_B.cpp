#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n + 1, 0);

	for(int i = 0; i < ((4 * n) - 1); i++) {
		int x;
		cin >> x;
		a[x]++;
	}

	for(int i = 0; i < n + 1; i++) {
		// cout << a[i] << endl;
		if(a[i] == 3) {
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}