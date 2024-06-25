#include <iostream>
#include <vector>
using namespace std;

int main() {
    long n, a, time = 0;
    cin >> n >> a;
    vector<long>t(n);
    for(int i = 0; i < n; i++) cin >> t[i];

    for(int i = 0; i < n; i++) {
        if(time > t[i]) {
            time += a;
        } else {
            time = t[i] + a;
        }
        cout << time << endl;
    }

    return 0;
}