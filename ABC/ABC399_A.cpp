#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, ans = 0;
    string s,t;
    cin >> n >> s >> t;

    for(int i = 0; i < n; i++) {
        if(s[i] != t[i]) ans++;
    }

    cout << ans << endl;
    return 0;
}