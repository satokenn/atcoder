#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int i = 1;
    while(1) {
        if(b < c) break;
        else {
            c = c * i;
            i++;
        
            if(a <= c && c <= b) {
                cout << c << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}