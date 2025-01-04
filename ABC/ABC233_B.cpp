#include <iostream>
#include <string>
using namespace std;

int main() {
    int l, r;
    string s;
    cin >> l >> r >> s;
    r--; l--;
    string ans = s;
    int ri = r;

    for(int i = 0; i < s.size(); i++) {
        if(l <= i && i <= r) {
            ans[i] = s[ri];
            ri--;
        }
    }
    cout << ans << endl;
}