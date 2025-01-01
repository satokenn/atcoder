#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
     cin >> n;
     vector<int> t(n);
     vector<vector<int>> a(n);
     for(int i = 0; i < n; ++i) {
        int k;
        cin >> t[i] >> k;
        a[i] = vector<int>(k);
        for(int j = 0; j < k; ++j) {
            cin >> a[i][j];
            a[i][j]--;

        }
     }

     vector<bool> need(n);
     need[n - 1] = true;
     for(int i = n - 1; i >= 0; --i) {
        if(need[i]) {
            for(int j : a[i]) need[j] = true;
        }
     }

     long long ans = 0;
     for(int i = 0; i < n; ++i) {
        if(need[i]) ans += t[i];
     }

     cout << ans << endl;
     return 0;
}