#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n), num(0);
    int flag = n;
    for(int i = 0; i < n; i++) cin >> s[i];

    for(int a = 1; a <= 1000; a++) for(int b = 1; b <= 1000; b++) {
        num.push_back(4 * a * b + 3 * a + 3 * b);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < num.size(); j++) {
            if(s[i] == num[j]) {
                flag--;
                break;
            }
        }
    }
    cout << flag << endl;
    return 0;
}