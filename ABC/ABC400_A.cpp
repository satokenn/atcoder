#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t = 400;

    if(t % n == 0) {
        cout << t / n << endl;
    }
    else cout << -1 << endl;
    return 0;
}