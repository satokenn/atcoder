#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n, m, ans = 0;
    cin >> n >> m;
    map<int, int> map;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        map[a[i]]++;
    }

    for(int i = 1; i < m; i++) {
        if(map[i] == 0) {
            cout << ans << endl;
            return 0;
        }
    }

    for(int i = n - 1; i >= 0; i--) {
        map[a[i]]--;
        ans++;
        if(map[a[i]] == 0) {
            cout << ans << endl;
            return 0;
        }
    }


}
