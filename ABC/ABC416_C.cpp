#include <iostream>
#include <string>
using namespace std;



int main() {
    int n, k, x;
    cin >> n >> k >> x;
    int count = 1;
    vector<string> s(n), con;
    for(int i = 0; i < n; i++) cin >> s[i];

    for(int bit = 0; bit < (1 << n); bit++) {
        string ns = "";
        for(int i = 0; i < n; i++) {
            if(bit & (1<<i)) {
                ns += s[i];
            }
        }
        con.push_back(ns);
    }
    sort(con.begin(), con.end());

    if(x >= con.size()) x = con.size() - 1;
    cout << con[x] << endl;
    return 0;
}