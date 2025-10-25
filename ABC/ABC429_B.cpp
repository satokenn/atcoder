#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, sum = 0;
    cin >> n >> m;
    vector<int> a(n);
    bool flag = false;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    for(int i = 0; i < n; i++) {
        if(m == (sum - a[i])) flag = true;
    }

    if(flag) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}