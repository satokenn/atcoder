#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ai = 0, bi = 0;
    int ans = 1001001001;
    while(ai < n && bi < m) {
        ans = min(ans, abs(a[ai] - b[bi]));
        if(a[ai] < b[bi]) ai++;
        else bi++;
    }
    cout << ans << endl;
    return 0;

}