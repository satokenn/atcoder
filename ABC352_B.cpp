#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int i = 0, j = 0; // iはsの添え字, jはtの添え字.
    while(1) {

        if(s[i] == '\0') break;
        else if(s[i] == t[j]) {
            cout << j + 1 << " ";
            i++;
        }
        
        
         j++;
    }
    return 0;
}