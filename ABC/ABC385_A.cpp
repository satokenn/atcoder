#include <iostream>
using namespace std;

int main() {
	int x, y, z;
	cin >> x >> y >> z;
	if(x + y == z || y + z == x || z + x == y){
		cout << "Yes\n";
	}
	else if(x == y && y == z) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	return 0;
}

