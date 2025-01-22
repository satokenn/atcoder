#include <iostream>
using namespace std;
const long long MAX = 1LL << 31;

int main() {
	long long n;
	cin >> n;
	if((-MAX <= n) && (n < MAX)) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}