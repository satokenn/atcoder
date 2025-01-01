#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long  n, t = 1;
    cin >> n;
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];

    int num = 0;
    int div = 0;
    for(int num = 0; num < n; num++) {
        div = h[num] / 5;
        h[num] -= div * 5;
        t = t + (3 * div);
        if(h[num] <= 2){
            t += h[num];
        }
        else if(h[num] >= 3){
            t += 3;
        }
        h[num] = 0;
        if(h[n - 1] <= 0) break;
    }
    cout << t - 1 << endl;
}