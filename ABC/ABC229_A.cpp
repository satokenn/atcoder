#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >>  s2;
	bool flag = true;
	if(s1 == ".#" && s2 == "#.") flag = false;
	else if( s1 == "#." && s2 == ".#") flag = false;
	
	if(flag) cout << "Yes\n" << endl;
	else cout << "No\n" << endl;
	return 0;
}	

