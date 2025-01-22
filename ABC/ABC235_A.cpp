#include <iostream>
using namespace std;

int main() {
	char x, y, z;
	cin >> x >> y >> z;

	int a = x - '0', b = y - '0', c = z - '0';


	int abc = 100 * a + 10 * b + c;
	int cab = 100 * c + 10 * a + b;
	int bca = 100 * b + 10 * c + a;

	int ans = abc + cab + bca;
	cout << ans << endl;
}