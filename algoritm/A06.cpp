#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector <int> a(n + 1);

    cin >> a[1];
    for(int i = 2; i < n + 1; i++) {
        int tmp;
        cin >> tmp;
        a[i] = a[i - 1] + tmp;
    }

    for(int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << a[r] - a[l - 1] << endl;
    }
}