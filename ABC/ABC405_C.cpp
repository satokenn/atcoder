#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    long long ans = 0;
    cin >> n;
    vector<long long> a(n), sum(n, 0);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(1 <= i) {
            sum[i] += sum[i - 1] + a[i];
        }
    }
    for(int i = 0; i < n; i++) {
        ans += a[i] * (sum[n - 1] - sum[i]);
    }
    cout << ans << endl;
    return 0;
}