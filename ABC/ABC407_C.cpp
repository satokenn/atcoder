#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    long ans = 1;
    int minuend = 0, sub = s[s.size() - 1] - '0';
    ans += sub;
    minuend = sub;
    for(int i = s.size() - 2; i >= 0; i--) {
        sub = s[i] - '0';
        if(sub == 0) sub = 10;
        if((sub - minuend) < 0) sub += 10;
        ans += (sub - minuend);
        minuend = s[i] - '0';
        ans++;
    }
    cout << ans << endl;
    return 0;
}