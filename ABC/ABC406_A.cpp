#include<iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(c < a){
        cout << "Yes\n";
    }
    else if(d < b && a == c) {
        cout << "Yes\n";
    }
    else cout << "No\n";
    return 0;
}