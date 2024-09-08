#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    long long ans = 0;
    int r = 0;
    for(int l = 0; l < n; l++) {
        while(r < n) {
            if(r > l + 1 && a[r] - a[r - 1] != a[r - 1] - a[r - 2]) break;
            r++;
        }
        ans += r - l;
    }
    cout << ans << endl;

}