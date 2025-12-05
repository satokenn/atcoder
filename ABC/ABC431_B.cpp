#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x, n, q, index;
    long long sum = 0;
    cin >> x >> n;
    vector<int> w(n);
    vector<bool> p(n, false);
    sum += x;
    for(int i = 0; i < n; i++) {
        cin >> w[i];
    }

    cin >> q;

    for(int i = 0; i < q; i++) {
        cin >> index;
        index--;
        if(!p[index]) {
            p[index] = true;
            sum += w[index];
            cout << sum << endl;
        }
        else if(p[index]) {
            p[index] = false;
            sum -= w[index];
            cout << sum << endl;
        }
    }
    return 0;
}