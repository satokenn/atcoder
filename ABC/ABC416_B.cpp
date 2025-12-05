#include <iostream>
#include <string>
using namespace std;

int main () {
    string s, t;
    bool flag = false;
    cin >> s;
    t = s;
    for(int i = 0; i < s.size(); i++) {
        if(flag && t[i] == '#') {
            flag = false;
        }
        else if(t[i] == '#') continue;
        else if(!flag) {
            t[i] = 'o';
            flag = true;
        }
    }
    cout << t << endl;
    return 0;
}