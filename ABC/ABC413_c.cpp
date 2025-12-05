#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main (){
    int q; cin >> q;
    deque<pair<ll, ll>> a;
    for(int i = 0; i < q; i++){
        int n; cin >> n;
        if(n == 1){
            ll c, x; cin >> c >> x;
            a.push_back({x, c});
        }else if(n == 2){
            ll k; cin >> k;
            ll sum = 0;
            while(k > 0){
                auto[kazu, kosu] = a.front();
                a.pop_front();
                ll now = min(k, kosu);
                sum += now * kazu;
                k -= now;
                if(kosu > now){
                    a.push_front({kazu, kosu - now});
                }
            }
            cout << sum << "\n";
        }
    }
}