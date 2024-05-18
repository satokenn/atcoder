#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, mod = 0;
    cin >> n;
    vector <string> s(n);

    for(int i = 0; i < n; i++) {
        int c;
        cin >> s[i] >> c;
        mod += c;
    }

    mod %= n;

    sort(s.begin(), s.end());

    for(int i = 0; i < n; i++) {
        if(mod == i) cout << s[i] << endl;
    }

    return 0;
}