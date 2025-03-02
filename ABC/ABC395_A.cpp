#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];

	for(int i = 1; i < n; i++) {
		if(a[i - 1] < a[i]) continue;
		else {
			cout << "No\n" << endl;
			return 0;
		}
	}
	cout << "Yes\n" << endl;
	return 0;
}
