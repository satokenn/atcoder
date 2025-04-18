#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    long long sum = 0;
    cin >> n >> m;
    long long inf = pow(10, 9);

    for(int i = 0; i <= m; i++) {
        sum += pow(n, i);
        if(sum > inf) {
            cout << "inf" << endl;
            return 0;
        }
    }
    cout << sum << endl;
    return 0;
}