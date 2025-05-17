#include <iostream>
#include <vector>
#include <cmath>
using namespace std;



int main() {
    long long n, k, dig = 1, ans = 1;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
   for (int i = 0; i < k; i++) {
        dig *= 10;
    }
    for(int i = 0; i < n; i++) {
        long double log_ans = log10l(ans);
        long double log_a = log10l((long double)a[i]);        
        if(log_ans + log_a > k){
            ans = 1;
        }
        else ans = ans * a[i];
        if(dig <= ans) ans = 1;
    }
    cout << ans << endl;
    return 0;
}