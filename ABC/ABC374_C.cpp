#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> k(n);
    int ans = 1001001001;

    for(int i = 0; i < n; i++) cin >> k[i];

    for (int bit=0; bit<(1<<n); bit++){
        vector<int> use(n, 0);
        int A = 0, B = 0;

        for (int j=0; j<n; j++){
            if (bit & (1<<j)) use[j]=1;
        }
        for(int j = 0; j < n; j++) {
            if(use[j] == 1) A += k[j];
            else B += k[j];
        }
        ans = min(ans, max(A, B));
    }
    cout << ans << endl;
}