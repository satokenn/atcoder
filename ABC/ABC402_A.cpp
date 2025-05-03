#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s; 

    for(int i = 0; i < s.size(); i++) {
        int ni = s[i];
        if(65 <= ni && ni <= 90) {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}