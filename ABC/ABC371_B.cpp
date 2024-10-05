#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int>a(m);
    vector<char> b(m);
    vector<bool> flag(100, true);
    for(int i = 0; i < m; i++) cin >> a[i] >> b[i];

    for(int i = 0; i < m; i++) {
        if(b[i] == 'F') {
            cout << "No\n";
            continue;
        }
        else if(flag[a[i]]) {
            cout << "Yes\n";
            flag[a[i]] = false;
        }
        else cout << "No\n";
    }
    return 0;
}