#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    bool flag = true;
    cin >> s >> t;

    int k = (t[0] - s[0] + 26) % 26;

    for(int i = 1; i < s.size(); i++) {
        if(k != (t[i] - s[i] + 26) % 26) {
            flag = false;
            break;
        }
    }

    if(flag) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}