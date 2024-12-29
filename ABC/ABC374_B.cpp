#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    int num = 0;
    cin >> s >> t;

    for(int i = 0; i < max(s.size(), t.size()); i++) {
        if(s[i] != t[i]) {
            num = i + 1;
            break;
        }
    }
    cout << num << endl;
}