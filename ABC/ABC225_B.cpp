#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> tree(n + 1);

    for(int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        tree[a]++;
        tree[b]++;
    }
    for(int i = 1; i <= n; i++) {
        if(tree[i] == n - 1) {
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";
    return 0;
}