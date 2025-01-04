#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, q, ans = 0;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> x(q);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < q; i++) cin >> x[i];

    sort(a.begin(), a.end());

    for(int i = 0; i < q; i++) {
        int left = -1, right = n;
        while(right - left > 1) {
            int mid = (left + right) / 2;
            if(x[i] <= a[mid]) right = mid;
            else left = mid;
        }
        ans = n - right;
        cout << ans << endl;
    }
    return 0;
}
