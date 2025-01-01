#include <iostream>
#include <string>
using namespace std;

int main() {
    int i = 0;
    string s;
    cin >> s;

    bool check = true;
    string ns;
    ns = s[0];
    ns += s[1];


    if(ns == "xx") i = 2;
    else if(s[0] == 'x' ) i = 1;

    for(int j = i; j < s.size(); j++) {
        if((j - i) % 3 == 0 && s[j] != 'o') {
            check = false;
        }
        else if((j - i) % 3 != 0 && s[j] != 'x') {
            check = false;
        }
    }
    if(check) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}