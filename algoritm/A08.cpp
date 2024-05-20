#include <iostream>
#include <vector>
using namespace std; 

int main() {
    int h, w, q;
    cin >> h >> w;
    vector<vector<int>> x(h + 1, vector<int>(w + 1, 0)), r(h + 1, vector<int>(w + 1, 0));

    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= w; j++) {
            cin >> x[i][j];
        }
    }

    for(int i = 1; i <= h; i++) {
        r[i][1] = x[i][1];
        for(int j = 2; j <= w; j++) {
            r[i][j] = r[i][j - 1] + x[i][j];
        }
    }

    for(int i = 1; i <= w; i++) {
        for(int j = 2; j <= h; j++){
            r[j][i] += r[j - 1][i];
        }
    }

    cin >> q;

    for(int i = 0; i < q; i++) {
        int a, b, c, d, ans;
        cin >> a >> b >> c >> d;
        ans = r[a - 1][b - 1] + r[c][d] - r[c][b - 1]  - r[a - 1][d];
        cout << ans << endl;
    }
    return 0;
}