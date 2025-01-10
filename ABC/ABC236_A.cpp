#include <iostream>
using namespace std;

int main() {
	string s;
	int a, b;
	cin >> s >> a >> b;
	a--; b--;

	char tmp = s[a];
	s[a] = s[b];
	s[b] = tmp;

	cout << s << endl;
	return 0;
}