#include <iostream>
using namespace std;

int main() {
	int a1, a2, a3;
	bool flag = false;
	cin >> a1 >> a2 >> a3;

	if((a1 * a2) == a3) flag = true;
	else if((a2 * a3) == a1) flag = true;
	else if((a3 * a1) == a2) flag = true;

	if(flag) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}