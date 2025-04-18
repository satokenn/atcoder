#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	long long max = 0;
	cin >> n;
	vector<long> a(n);
	vector<vector<long long>> ans(n, vector<long long>(n, 0));
	for(int i = 0; i < n; i++) cin >> a[i];

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(j == 0 || i == 0) ans[i][j] = a[j];
			else ans[i][j] = ans[i - 1][j - 1] + a[j];
		
			if(max < ans[i][j]) max = ans[i][j];
		}
		cout << max << endl;
	}	
	return 0;
}