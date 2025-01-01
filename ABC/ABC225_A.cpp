#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = s.size();

    for(int i = 1; i < s.size(); i++) {
        for(int j = 0; j < i; j++) {
            if(s[i] == s[j]) {
                count--;
                break;
            }
        }
    }


    if(count == 1) cout << 1 << endl;
    else if(count == 2) cout << 3 << endl;
    else if(count == 3) cout << 6 << endl;
    return 0;
}