#include <iostream>
using namespace std;
int main() {
    string ab, ac, bc;
    cin >> ab >> ac >> bc;

    if(ab != ac) cout << 'A';
    else if(ab == bc) cout << 'B';
    else cout << 'C';

    cout << endl;
    return 0;
}