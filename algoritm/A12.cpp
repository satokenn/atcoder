#include <iostream>
#include <vector>
using namespace std;

int search(int n, int k, vector<int>a);

int main() {
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << search(n, k, a) << endl;

}


int search(int n, int k, vector<int> a) {
    long long left = 1;
    long long right = 1e9;
    long long mid = left + (right - left) / 2;
    long long x;
    long long pri = 0;
    for(int i = 0; i < n; i++) {
        x += mid / a[i];
    }
    while(left <= right) {
        mid = left + (right - left) / 2;
        x = 0;
        for(int i = 0; i < n; i++) {
            x += (mid / a[i]);
        }
        if(k < x)  {
            right = mid - 1;
        }
        else if(x < k) {
            left = mid + 1;
        }

    }
    return left;
}