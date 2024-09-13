#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    n += 1;

    vector<vector<int>> a(n, vector<int>(n));

    for(int i = 1; i < n; i++) {
        for(int j = 1; j <= i; j++) {
            cin >> a[i][j];
        }
    }

    int i = 1;
    for(int j = 1; j < n; j++) {
        if(i >= j) i = a[i][j];
        else if(i < j) i = a[j][i];
    }

    cout << i << endl;
}