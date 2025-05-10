#include<iostream>
#include <vector>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<pair<int, int>> e;
    vector<string> s(h);
    for(int i = 0; i < w; i++) {
        for(int j = 0; j < h; j++) {
            cin >> s[i][j];
            if(s[i][j] == 'E') {
                e.push_back(make_pair(i, j));
            }
        }
    }
    


}