#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char>s(7);
    for(int i = 0; i < 7; i++) {
        cin >> s[i];
    }
    if(s[n - 1] == 'o') cout << "Yes\n";
    else cout << "No\n";
    return 0;
}