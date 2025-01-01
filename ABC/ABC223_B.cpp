#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    string mn = s, mx = s;
    for(int i = 0; i < n; i++) {
        mn = min(mn, s);
        mx = max(mx, s);
        rotate(s.begin(), s.begin() + 1, s.end());
    }
    cout << mn << endl;
    cout << mx << endl;
}
