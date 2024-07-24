#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    int x, y;
    x = (int)n;
    y = n * 10 - (x * 10);
    if(0 <= y && y <= 2) {
        cout << x << "-" << endl;
    }
    else if(3 <= y && y <= 6) {
        cout << x << endl;
    }
    else cout << x << "+" << endl;

    return 0;
}