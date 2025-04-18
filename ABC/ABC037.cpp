#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n, k, ans = 0;
    cin >> n >> k;
    vector<long long> a(n), s(n + 1, 0);
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++) s[i + 1] = s[i] + a[i];

    for(int i = k; i < (n + 1); i++) {
        ans += (s[i] - s[i - k]);
    }

    cout << ans << endl;
    return 0;
}