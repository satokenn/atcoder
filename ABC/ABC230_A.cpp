#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = "AGC";
    if(n > 41) {
        s += "0";
        s += to_string(n + 1);
    }
    else {
        if(n < 10) {
            s += "00";
            s += to_string(n);
        }
        else {
            s += "0";
            s += to_string(n);
        }
    }
    cout << s << endl;
    return 0;
}
