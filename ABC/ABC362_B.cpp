#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a[3][2];
    for(int i = 0; i < 3; i++) {
        cin >> a[i][0] >> a[i][1];
    }
    double angle[2];
    for(int i = 0; i < 2; i++) {
        angle[i] = atan2(a[i][1] - a[2][1], a[i][0] - a[2][0]);
    }
    int ans = angle[0] - angle[1];
    cout << ans << endl;
    return 0;
}