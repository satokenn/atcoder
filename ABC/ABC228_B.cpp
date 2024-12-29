#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x, count = 0, index;
    cin >> n >> x;
    n++;
    vector<int>a(n);
    vector<bool>flag(n, false);
    for(int i = 1; i < n; i++) cin >> a[i];

    index = x;

    for(int i = 1; i < n; i++) {
        flag[index] = true;
        index = a[index];
    }

    for(int i = 1; i < n; i++) {
        if(flag[i]) count++;
    }

    cout << count << endl;
    return 0;
}