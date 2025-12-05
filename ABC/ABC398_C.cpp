#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> map;
    int ans = -2, num = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        map[a[i]]++;
    }

    for(int i = 0; i < n; i++) {
        if(map[a[i]] != 1) continue;
            if(num < a[i]) {
                num = a[i];
                ans = i;
            }
    }
    cout << ans + 1<< endl;
    return 0;
}