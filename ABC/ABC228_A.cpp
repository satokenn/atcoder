#include <iostream>
using namespace std;

int main() {
    int s, t, x;
    cin >> s >> t >> x;
    bool flag = false;

    if(s > t) {
        if((s <= x && x <= 23) || (0 <= x && x < t)) flag = true;
    }
    else if(s <= x && x < t) flag = true;

    if(flag) cout << "Yes\n";
    else cout << "No\n";
}