#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<string> s(n), t(m);
	for(int i = 0; i < n; i++) cin >> s[i];
	for(int i = 0; i < m; i++) cin >> t[i];

	int index = 0;
	for(int i = 0; i < n; i ++) {
		if(s[i] == t[index]) {
			cout << "Yes\n";
			index++;
		}
		else cout << "No\n";
	}
	return 0;
}