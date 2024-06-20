#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int left = a[0];
    int right = a[n - 1];

    while(right - left > 1) {
        int mid = left + (right - left) / 2;
        if(mid < x) {
            left = mid;
        } else {
            right = mid;
        }
    }
    return right;
}
