#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if(x == 0 || x % 100 != 0) cout << "No\n";
    else cout << "Yes\n";
    return 0;
}