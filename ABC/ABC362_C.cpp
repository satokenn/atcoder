#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, pm = 0;
    cin >> n;
    vector<int> l(n), r(n), flag(n), ans_arr(n);
    int judge = 0;
    for(int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
        if(r[i] > 0) {
            flag[i] = -1;
        }
        else if(l[i] < 0) {
            flag[i] = 1;
        } else {
            flag[i] = 0;
        }
        judge += flag[i];
    }

for(int x = l[0]; x <= r[0]; x++) {
    ans_arr[0] = x;
    pm =  ans_arr[0];

        for(int i = 1; i < n; i++) {
            if(l[i] <= (pm * -1) && (pm * -1) <= r[i]) {
                ans_arr[i] = (pm * -1);
            }
            else if((pm * -1) < l[i]) {
                ans_arr[i] = l[i];
            } else {
                ans_arr[i] = r[i];
            }
            pm += ans_arr[i];
        }
        if(pm == 0) {
            cout << "Yes\n";
            for(int i = 0; i < n; i++) {
                cout << ans_arr[i]  << " ";
            }
            // cout << endl;
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}