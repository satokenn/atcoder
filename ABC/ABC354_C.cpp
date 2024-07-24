#include <bits\stdc++.h>
using namespace std;

int main() {
    long long n, min_cost = 1e9, max_attack = 0;
    cin >> n;
    vector <pair<int, int>> p(n);

    for(int i = 0; i < n; i++) {
        int a, c;
        cin >> a >> c;
        if(min_cost > c) min_cost = c;
        if(max_attack < a) max_attack = a;
        p.at(i) = make_pair(a, c);
    }

    for(int i = 0; i < n; i++) {
        int a, c;
        tie(a, c) = p.at(i);
        if(a < max_attack && min_cost < c){
            continue;
        }
        else{
            cout << i + 1 << " ";
        }
    }
    return 0;
}