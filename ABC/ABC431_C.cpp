#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, k, max_weight, index = 0, ok = 0;
    cin >> n >> m >> k;
    vector<int> h(n), b(m);

    for(int i = 0; i < n; i++) cin >> h[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    sort(h.begin(), h.end());
    sort(b.begin(), b.end());

    for(int i = 0; i < n; i++) {
        while(index < m) {
            if(b[index] < h[i]) {
                index++;
            }
            else if(h[i] <= b[index]) {
                index++;
                ok++;
                break;
            }
        }

    }

    if(k <= ok) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}