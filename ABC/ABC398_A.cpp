#include <iostream>
using namespace std;

int main() {
    int n;
    string s = "";
    cin >> n;

    if(n % 2 != 0) {
        int num = n / 2;
        for(int i = 0; i < num; i++) {
            s += '-';
        }
        s += '=';
        for(int i = 0; i < num; i++) {
            s += '-';
        }
    }
    else {
        int num = (n / 2) - 1;
        for(int i = 0; i < num; i++) {
            s += '-';
        }
        for(int i = 0; i < 2; i++) {
            s += '=';
        }
        for(int i = 0; i < num; i++) {
            s += '-';
        }
    }
    cout << s << endl;
    return 0;
}