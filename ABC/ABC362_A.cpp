#include <iostream>
#include <string>
using namespace std;

int main() {
    int r, g, b;
    string c;
    cin >> r >> g >> b;
    cin >> c;
    int Min = 1000;
    if(c != "Red") {
        Min = min(r, Min);
    }
    if(c != "Blue") {
        Min = min(b, Min);
    }
    if(c != "Green") {
        Min = min(g, Min);
    }
    cout << Min << endl;
}