#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, ns;
    cin >> s;
    for(int i = s.size() - 3; i < s.size(); i++) {
        ns += s[i];
    }
    if(ns == "san") cout << "Yes\n";
    else cout << "No\n";
}