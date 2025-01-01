#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n , k;
     cin >> n >> k;
     vector<int> a(n);

     for(int i = 0; i < n; i++) cin >> a[i];

     for(int i = 0; i < k; i++) {
        a.insert(a.begin(), a[n - 1]);
        a.erase(a.end() - 1);
     }
     for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
     }
     cout << endl;
     return 0;
}