#include <iostream>
using namespace std;

int main () {
    int w, b, wg, ans;
    cin >> w >> b;
    wg = 1000 * w;

    ans = (wg / b) + 1;

    cout << ans << endl;
}