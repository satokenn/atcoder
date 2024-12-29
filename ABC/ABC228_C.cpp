#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> s(n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            int a; 
            cin >> a;
            s[i] += a;
        }
    }
    vector<int> d = s;
    sort(d.rbegin(), d.rend());
    int mx = d[k - 1];
    for(int i = 0; i < n; i++) {
        if(s[i] + 300 >= mx) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}