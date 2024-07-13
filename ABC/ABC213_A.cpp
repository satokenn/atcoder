#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    vector<int> bit(8, 1), ans(8, 0), a(8, 0), b(8, 0);
    int num = 0;

    for (int i = 0; A > 0; i++) {
        a[i] = A % 2;
        A /=  2;
    }
    for(int i = 0; B > 0; i++) {
        b[i] = B % 2;
        B/= 2;
    }
    for(int i = 0; i < 8; i++) {
        if(0 < i) bit[i] = (bit[i - 1] * 2);
        if(a[i] + b[i] == 1) ans[i] = 1;
        else ans[i] = 0;
        num += (ans[i] * bit[i]);
    }
    cout << num << endl;
    return 0;

}