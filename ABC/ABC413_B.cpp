#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> a;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j) {
                a.insert(s[i] + s[j]);
            }
        }
    }
    cout << a.size() << endl;
}