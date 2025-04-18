#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(pow(2,n) > n*n) {
        cout << "Yes\n";
    }
    else cout << "No\n";
    return 0;
}