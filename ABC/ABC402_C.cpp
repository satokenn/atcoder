#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binarysearch(int key, vector<int> a) {
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    int left = -1;
    int right = a.size();

    while(right - left > 1) {
        int mid = left + (right - left) / 2;
        if(a[right] == key) {

        return true;
        }
        if(a[mid] >= key) right = mid;
        else left = mid;
    }
    return false;
}

int main() {
    int n, m, ans = 0;
    cin >> n >> m;

    vector<vector<int>> a(m);
    vector<int> b(n), cnt(m);

    for(int i = 0; i < m; i++)  {
        int k;
        cin >> k;
        for(int j = 0; j < k; j++) {
            int ai;
            cin >> ai;
            a[i].push_back(ai);
            cnt[i]++;
        }
        sort(a[i].begin(), a[i].end());
    }


    for(int i = 0; i < m; i++) {
        cout << "a[i] = ";
        for(int j = 0; j < a[i].size(); j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }


    for(int i = 0; i < n; i++) {
        cout << "探索する値 = "  << b[i] << ", "<< endl;
        for(int j = 0; j < m; j++) {
            if(binarysearch(b[i], a[j])) {
                cout << "a[i] = " << i << "番のkey" << b[i] << "が発見されました" << endl;
                cnt[i]--;
                if(cnt[i] == 0) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}