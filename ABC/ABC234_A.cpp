#include <iostream>
using namespace std;

int function(int t) {
	int xx = t * t;
	int x2 = 2 * t;
	
	return xx + x2 + 3;
}


int main() {
	int t;
	cin >> t;

	int ft = function(t);
	int fft = function(ft);

	int fftt = function(ft + t);

	int ans = function(fftt + fft);

	cout << ans << endl;
}
