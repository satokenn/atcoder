#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> f,b;
    vector<int> front(n), back(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++) {
        f.insert(a[i]);
        front[i] = f.size();
    }

    for(int i = n - 1; i >= 0; i--) {
        b.insert(a[i]);
        back[i] = b.size();
    }
    long long ans = 0, now = 0;

    for(int i = 0; i < n - 1; i++) {
        now = front[i] + back[i + 1];
        ans = max(ans, now);
    }

    cout << ans << endl;
    return 0;
}