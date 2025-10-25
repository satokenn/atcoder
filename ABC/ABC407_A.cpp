#include <iostream>
using namespace std;

int main() {
    double a, b, f, fmin = 10e9;
    int ans;
    cin >> a >> b;
    for(int i = 0; i < 800; i++) {
        double ni = i * b;
        ni = abs(a - ni);
        f =  ni / b;
        if(f < fmin) {
            ans = i;
            fmin = f;
        }
    }
    cout << ans << endl;
}