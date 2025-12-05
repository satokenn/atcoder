#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    long long divNum = 1e9, worm = 0;
    long long n, k;
    cin >> n >> k;
    int l = max(n, k);
    vector<long long> memo(l + 1);

    worm = k;
    for(int i = 0; i < k; i++) memo[i] = 1;

    if(n < k) {
        cout << 1 << endl;
        return 0;
    }

    for(int i = k; i < n + 1; i++) {
        memo[i] = worm;
        worm = (worm + memo[i] - memo[i - k] + divNum) % divNum;
    }

    cout << memo[n] % divNum << endl;
    return 0;
}