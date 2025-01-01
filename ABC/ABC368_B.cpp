#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i< n; i++) cin >> a[i];

    while(true) {
        sort(a.rbegin(), a.rend());
        if(a[1] <= 0) break;
        a[0]--; a[1]--;
        count++;
    }

    std::cout << count << endl;
    return 0;
}