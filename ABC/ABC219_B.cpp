#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> s(3);
    for(int i = 0; i < 3; i++) {
        cin  >> s[i];
    }
    string t;
    cin >> t;
    string ans;
    for(char c : t) ans+= s[c - '1'];
    cout << ans << endl;
    return 0;
}

/* 以下は文字列（文字型）から数値に変換する際の解説(?)
 * string型からint型に変換したい際には,stoi()関数なるものを用いる.
 * char型からint型に変換したい際は, 文字コードの引き算を行う.
 */