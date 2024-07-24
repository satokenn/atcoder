#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int a = s.compare(t);
    if(a == -1) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}