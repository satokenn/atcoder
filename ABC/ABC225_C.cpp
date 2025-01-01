#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> b(n, vector<int>(m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            b[i][j]--;
        }
    }

    int si = b[0][0] / 7; // 先頭の行
    int sj = b[0][0] % 7; // 先頭の列
    if(sj + m - 1 >= 7) { // 行列Bの列数が7以上かどうか判定
        cout << "No\n";
        return 0;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int nb = (si + i) * 7 + (sj + j); // それぞれの要素があっているかどうか判定
            if(b[i][j] != nb) {
                cout << "No\n";
                return 0;
            }
        }
    }
    cout << "Yes\n";
    return 0;
}