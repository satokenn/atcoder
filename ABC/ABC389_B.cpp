#include <iostream>
using namespace std;

int main() {
	long long a;
	cin >> a;
	long long ans = 1, i = 2;

	while(1) {
		ans *= i;
		if(ans == a) break;
		else i++;
	}
	cout << i << endl;
	return 0;
}