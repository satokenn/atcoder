#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        int n, h;
        cin >> n >> h;
        vector<int> t(n + 1, h), l(n + 1, 0), u(n + 1, 0);
        for(int i = 1; i < n; i++) {
            cin >> t[i] >> l[i] >> u[i];
        }
        for(int i = 1; i < n; i++) {
            int dt, left = h, right = h;
            dt = t[i] - t[i - 1];
            left -= dt;
            right += dt;

            left = max(left, l[i]);
            right = min(right, u[i]);

            if(right < left) {
                cout << "No\n";
                break;
            }
        }
        cout << "Yes\n";
    }
}