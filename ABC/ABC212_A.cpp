#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(0 < a && b == 0) {
        cout << "Gold\n";
        return 0;
    }
    if(a == 0 && 0 < b) {
        cout << "Silver\n";
        return 0;
    }
    else {
        cout << "Alloy\n";
        return 0;
    }
}