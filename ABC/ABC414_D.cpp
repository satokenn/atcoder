#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> x(n);
    for(int i = 0; i < n; i++) cin >> x[i];
    sort(x.begin(), x.end());

    vector<long long> d;
    for(int i = 0; i < n - 1; i++) {
        d.push_back(x[i + 1] - x[i]);
    }
    sort(d.begin(), d.end());

    for(int i = 0; i < m - 1; i++) {
        d.pop_back();
    }
    long long ans = 0;
    for(long long nd : d) ans += nd;
    cout << ans << endl;
    return 0;
}