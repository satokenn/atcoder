#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    int l = -1, r = -1;
    vector<int> a(n);
    vector<char> s(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i] >> s[i];
    }

    for(int i = 0; i < n; i++) {
        if(s[i] == 'L') {
            if(l != -1) ans += abs(l - a[i]);
            l = a[i];
        } else {
            if(r != -1) ans += abs(r - a[i]);
            r = a[i];
        }
    }
    cout << ans << endl;
    return 0;
}