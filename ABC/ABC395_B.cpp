#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<char>> c(n, vector<char>(n));

	for(int i = 0; i < n; i++) {
		int x = i + 1;
		int j = n + 1 - x;
	       if(x <= j) {
	       	if((x % 2) == 0) {
			for(int k = i; k < j; k++) {
				for(int l = i; l < j; l++) {
					c[k][l] = '.';
				}
			}
		} else {
			for(int k = i; k < j; k++) {
				for(int l = i; l < j; l++) {
					c[k][l] = '#';
				}
			}
		}
	       }
	}
	
	for(int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << c[i][j];
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
		
