#include <iostream>
#include <vector>
using namespace std;


int search(int x, int n, vector<int> a) {
    int left = 0;
    int right = n - 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(x < a[mid]) {
            right = mid - 1;
        }
        else if(a[mid] < x) {
            left = mid + 1;
        }
        else if(a[mid] == x) return mid;
    }
    return -1;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = search(x, n , a);
    cout << ans + 1 << endl;
    return 0;
}
