#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, p, count = 0;
    cin >> n >> p;
    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >>a[i];

    for(int i = 0; i < n; i++) {
        if(a[i] < p) count++;
    }
    cout << count << endl;
}