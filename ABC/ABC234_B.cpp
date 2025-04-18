// setprecision を用いることで小数点以下10桁を出力させている.
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int n;
	double ans = 0;
	cin >> n;
	vector<double> x(n), y(n);

	for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			double X = x[j] - x[i];
			double Y = y[j] - y[i];
			ans = max(ans, sqrt(X * X + Y * Y));
		}
	}
	cout << fixed << setprecision(10) << ans << endl;
	return 0;
	
}
