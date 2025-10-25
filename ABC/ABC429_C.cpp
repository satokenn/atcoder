#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long comb(int n, int r) {
    long long up = 1, down = 1;
    int np = n;
    int sub = 0;
    while(sub < r){
        up *= np;
        sub++;
        np--;
    }
    for(int i = r; i >= 1; i--) down *= i;
    return up / down;
}

int main() {
    long long n, sum = 0;
    cin >> n;
    long long np = n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) {
        int hoge;
        cin >> hoge;
        a[hoge]++;
    }

    for(int i = 1; i <= n; i++) {
        if(a[i] >= 2) {
            sum += comb(a[i], 2) * (np - a[i]);
        }
    }
    cout << sum << endl;
}