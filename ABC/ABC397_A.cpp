#include <iostream>
using namespace std;

int main() {
    float x;
    cin >> x;

    if(38.0 <= x) cout << 1 << endl;
    else if(37.5 <= x && x < 38.0) cout << 2 << endl;
    else cout << 3 << endl;

    return 0;
}