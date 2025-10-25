#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    int x, y;
    long double ans = 0, div = 36.0;
    cin >> x >> y;


    for(int i = 1; i < 7; i++) {
        for(int j = 1; j < 7; j++) {
            if(x <= (i + j) || y <= abs(i - j))  ans++;
        }
    }
    cout << fixed << setprecision(10) << endl;
    cout << (ans / div) << endl;
    return 0;
}