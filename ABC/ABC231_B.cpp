#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n, maxCnt = 0, cnt = 0;
	string maxName;
	cin >> n;
	vector<string> s(n);
	for(int i = 0; i < n; i++) cin >> s[i];


	for(int i = 0; i < n; i++) {
		cnt = 0;
		for(int j = 0; j < n; j++) {
			if(s[i] == s[j]) cnt++;

			if(cnt > maxCnt) {
				maxCnt = cnt;
				maxName = s[i];
			}
		}
	}

	cout << maxName << endl;
	return 0;
}
