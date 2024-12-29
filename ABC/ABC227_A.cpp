#include <iostream>
using namespace std;

int main() {
    int n, k, a;
    cin >> n >> k >> a;

    a--;

    for(int i = k; i > 0; i--) {
        if(a == n) {
            a = 1;
        }
        else a++;
    }
    cout << a << endl;

}