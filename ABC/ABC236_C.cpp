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

	memset(&hints, 0, sizeof(hints));
	servaddr.sin_family = AF_UNSPEC; // v4 || v6 どちらでも入る．
	hints.ai_socktype = SOCK_STREAM;    
	このコードのプログラムを解説してください．