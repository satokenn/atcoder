#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 7, t = 14;
    vector<int> a(n), cnt(t);
    bool three = false, two = false;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    for(int i = 0; i < t; i++) {
        if(!three && cnt[i] >= 3) three = true;
        else if(cnt[i] >= 2) two = true;
    }
    if(three && two) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}