#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    int expMax = 0, exp, rem = 0;
    int sumple;

    cin >> n >> m;

    vector<int> a(n);
    exp = sumple = m / n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        expMax = max(expMax, a[i]);
        if(a[i] < exp) rem += exp - a[i];
    }

    exp += rem / sumple;
    if(expMax < exp) cout << "infinite" << endl;
    else cout << exp << endl;
    return 0;
}