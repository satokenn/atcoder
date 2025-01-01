#include <iostream>
#include <string>
using namespace std;

int main() {
	long long a,b;
	cin >> a >> b;
	bool flag = false;
	while(a > 0 && b > 0) {
		if( a % 10 + b % 10 >= 10) flag = true;
		a /= 10, b /= 10;
	}
	if(flag) cout << "Hard" << endl;
	else cout << "Easy" << endl;
	return 0;
}
