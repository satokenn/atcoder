#include <iostream>
#include <vector>
using namespace std;

int main() {
    int d, n;
    cin >> d >> n;
    vector<int> l(n), r(n), a(d + 1, 0), ans(d + 1, 0); // aは累積和用の配列

    for(int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
    }

    // 累積和を求める
    for(int i = 0; i < n; i++) {
        a[l[i]]++;
        a[r[i] + 1]--; // R日目までは参加するので,R+1日目から来なくなる
    }

    cout << "--ここからが出力--\n";
    for(int i = 1; i <= d; i++) { // 0日目は含まれないため
        ans[i] = ans[i - 1] + a[i];
        cout << ans[i] << endl;
    }
}