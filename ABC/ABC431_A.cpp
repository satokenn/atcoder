#include <iostream>
using namespace std;

int main() {
    int h , b;
    cin >> h >> b;
    if(h <= b) cout << 0 << endl;
    else cout << h - b << endl;
    return 0;
}