#include <iostream>
#include <queue>
using namespace std;

int main() {
    int q;
    cin >> q;
    
    queue <int> Q;
    for(int i = 0; i < q; i++) {
        int que;
        cin >> que;
        if(que == 1) {
            int x;
            cin >> x;
            Q.push(x);
        }
        else if(que == 2) {
            cout << Q.front() << endl;
            Q.pop();
        }
    }
    return 0;
}