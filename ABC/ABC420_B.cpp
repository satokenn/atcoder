#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    vector<int> ans(n, 0);

    for(int i = 0; i < n; i++) cin >> s[i];

    for(int i = 0; i < m; i++) {
        int z_count = 0;
        for(int j = 0; j < n; j++) {
            if(s[j][i] == '0') z_count++;
        }
        if(z_count == 0 || z_count == m) {
            for(int j = 0; j < n; j++) {
                ans[j]++;
            }
        }
        else if(z_count > n - z_count) {
            for(int j = 0; j < n; j++) {
                if(s[j][i] == '1') ans[j]++;
            }
        }
        else if(n - z_count > z_count) {
            for(int j = 0; j < n; j++) {
                if(s[j][i] == '0') ans[j]++;
            }
        }
    }
    int max  = ans[0];
    for(int i = 1; i < n; i++) {
        if(ans[i] > max) max = ans[i];
    }
    for(int i = 0; i < n; i++) {
        if(ans[i] == max) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
    return 0;
}