#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, num = 0;
    cin >> n;
    vector<int> a(n), na(n), ans(n, 0);
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        a[i] = na[i] = tmp;
    }

    sort(na.rbegin(), na.rend());

    for(int i = 0; i < n; i++) {
        num++;
        for(int j = 0; j < n; j++) {
            if(i > 0) {
                if(na[i] == na[i - 1])continue;
            }
            if(na[i] == a[j]) ans[j] = num;
        }
    }
    for(int i = 0; i < n; i++) cout << ans[i] << endl;
    return 0;
}