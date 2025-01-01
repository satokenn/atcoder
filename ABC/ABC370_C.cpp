#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int n = s.size();

    vector<string> x;

    while(s != t) {
        string best; // 最も辞書順の中でも先頭に近い文字列を保管している.
        // ここのfor文で最も辞書順の中で先頭に近い文字列にしている.
        for(int i = 0; i < n; i++) {
            if(s[i] != t[i]) {
                string ns = s;
                ns[i] = t[i];
                if(best == "") best = ns;
                else best = min(best, ns);
            }
        }
        s = best;
        x.push_back(s);
    }
    cout << x.size() << endl;
    for(string s : x) cout << s << endl;
}