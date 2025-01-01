#include <iostream>
#include <vector>
#include <string>
using namespace std;
using ll = long long;

int main() {
    ll n, a, b;
    cin >> n >> a >> b;
    ll p, q, r, s;
    cin >> p >> q >> r >> s;

    // h, w で出力する範囲のサイズを計算している．
    int h = q - p + 1, w = s - r + 1;
    vector<string>ans (h, string(w, '.'));
    for(int i = 0; i < h; i++) { // i は判定範囲の各行のこと
        for(int j = 0; j < w; j++) { // j は判定範囲の各列のこと
            ll x = p + i, y = r + j; // x,y はそれぞれ現在注目しているマスのこと
            if(x-y == a - b || x + y == a + b) ans[i][j] = '#';
        }
    }
    for(int i = 0; i < h; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}