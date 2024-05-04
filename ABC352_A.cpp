#include <iostream>
using namespace std;

int main() {
    int n, x, y, z;
    cin >> n >> x >> y >> z;

    if(x < z && z < y) cout << "Yes\n";
    else if(y < z && z < x) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}