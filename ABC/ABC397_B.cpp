#include <iostream>
#include <string>
using namespace std;

int main() {
    int ans = 0, pla = 1;
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if((i + pla) % 2 == 0 && s[i] == 'i') {
            ans++; pla++;
        }
        else if((i + pla) % 2 == 1 && s[i] == 'o') {
            ans++; pla++;
        }
    }
    if(s[s.size() - 1] == 'i') ans++;

    cout << ans << endl;
    return 0;
}