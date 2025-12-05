#include<iostream>
#include<string>
using namespace std;

int main() {
    int n, l, r;
    string s;

    cin >> n >> l >> r >> s;

    for(int i = l - 1; i < r; i++) 
    if(s[i] != 'o') {
        cout << "No\n";
        return 0;
    }
    cout << "Yes\n";
    return 0;
}