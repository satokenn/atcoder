#include <iostream>
using namespace std;

int main() {
    int x[4];
    int X;
    cin >> X;
    x[0] = X / 1000;
    X %= 1000;
    x[1] = X / 100;
    X %= 100;
    x[2] = X / 10;
    X %= 10;
    x[3] = X;
    int count = 0;

    for(int i = 1; i < 4; i++) {
        if(x[i - 1] == x[i]) count++;
    }
    if(count == 3) {
        cout << "Weak\n";
        return 0;
    }
    count = 0;
    for(int i = 1; i < 4; i++) {
        if(x[i] == x[i - 1] + 1) count++;
        else if(x[i] == 0 && x[i - 1] == 9) count++;
    }
    if(2 < count) {
        cout << "Weak\n";
        return 0;
    }
    cout << "Strong\n";
    return 0;
}