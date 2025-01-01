#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    bool flag = false;

    if(s == t) flag = true;

    for(int i = 1; i < s.size(); i++) {
        string ns = s;
        swap(ns[i - 1], ns[i]);
        if(ns == t) flag = true;
    }
    if(flag) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}