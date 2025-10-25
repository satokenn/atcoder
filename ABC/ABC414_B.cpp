#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = "";
    vector<pair<char, long long>> cl(n);
    for(int i = 0; i < n; i++) {
        cin >> cl[i].first >> cl[i].second;
        
        for(int j = 0; j < cl[i].second; j++) {
            s += cl[i].first;
            if(100 < s.size()) {
                cout << "Too Long" << endl;
                return 0;
            }
        }
    }
    cout << s << endl;
    return 0;
    
}