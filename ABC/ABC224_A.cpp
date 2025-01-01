#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ns = "";
    for(int i = s.size() - 1; i >= 0; i--) {
        ns += s[i];
        if(ns == "re") {
            cout << "er" << endl;
            return 0;
        }

        if(ns == "tsi") {
            cout << "ist" << endl;
            return 0;
        }
    }
}