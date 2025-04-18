#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, ans = 0;
    bool login = false;
    cin >> n;


    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s == "login") login = true;
        else if(s == "logout") login = false;
        else if(s == "private" && !login) ans++;
    }

    cout << ans << endl;
    return 0;
}