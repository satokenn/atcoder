#include <iostream>
using namespace std;

int main() {
    int n, l, r, ans = 0;
    cin >> n >> l >> r;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if(x <= l && r <= y) ans++;
    }
    cout << ans << endl;
    return 0;

}