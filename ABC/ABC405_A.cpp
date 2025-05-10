#include <iostream>
using namespace std;

int main() {
    int r, x;
    cin >> r >> x;
    bool y = false;
    if(x == 1) {
        if(1600 <= r && r <= 2999) y = true;
    }
    else if(x == 2) {
        if(1200 <= r && r <= 2399) y = true;
    }
    if(y) cout << "Yes\n";
    else cout << "No\n";
}