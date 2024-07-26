#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> s(4), str(3);
    s = {"ABC", "AGC", "ARC", "AHC"};

    for(int i = 0; i < 3; i++) {
        cin >> str[i];
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            if(s[i] == str[j]) {
                s[i] = "";
            }
        }
    }

    for(int i = 0; i < 4; i++) {
        if(s[i] != "") {
            cout << s[i] << endl;
        }
    }

}