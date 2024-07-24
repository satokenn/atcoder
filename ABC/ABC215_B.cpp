#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int ans = 0;
    long long x  = 1;

    while(x * 2 <= n) {
        x *= 2;
        ans++;
    }
    cout << ans << endl;
    return 0;
}

#include <iostream>
using namespace std;


