#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int ans = 0;

    for(ans = 0; (10 * ans) + x < y; ans++);

    cout << ans << endl;
    return 0;
}