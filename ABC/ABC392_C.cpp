#include <iostream>
#include <vector>
using namespace std;
	
int main() {
	int n;
	cin >> n;
	vector<int> p(n + 5, 0), q(n + 5, 0), s(n + 5, 0);
	for(int i = 1; i <= n; i++) cin >> p[i];
	for(int i = 1; i <= n; i++) cin >> q[i];

	for(int i = 1; i <= n; i++) {
		int j = q[i];

		s[j] = q[p[i]];
	}

	for(int i = 1; i <= n; i++)  {
		cout << s[i] << " ";
	}
	cout << endl;
	return 0;
}