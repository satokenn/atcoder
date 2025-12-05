#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    long long ans = 0;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        ans += pow(-1, i) * (i * i * i);
    }
    cout << ans << endl;
    return 0;
}