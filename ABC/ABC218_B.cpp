#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> p(26);
    vector<char> ans(26, 'a');

    for(int i = 0; i < 26; i++) {
        cin >> p[i];
    }

    for(int i = 0; i < 26; i++) {
        ans[i] += (p[i] - 1);
        cout << ans[i];
    }
    cout << endl;
    return 0;
}