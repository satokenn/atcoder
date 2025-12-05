#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, r, c;
    string s, ans;
    cin >> n >> r >> c >> s;

    int ud = 0, rl = 0;
    set<pair<int, int>> st;
    st.emplace(0, 0);
    for(char ch : s) {
        if(ch == 'N') ud++;
        else if(ch == 'S') ud--;
        else if(ch == 'W') rl++;
        else if(ch == 'E') rl--;
        st.emplace(ud, rl);
        int cud = r + ud, crl = c + rl;
        if(st.count(pair<int, int>(cud, crl))) ans += '1';
        else ans += '0';
    }
    cout << ans << endl;
    return 0;
}