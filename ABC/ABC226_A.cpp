#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x;
    int ans;
    cin >> x;
    float xs = x;
    xs *= 10;

    int y = fmod(xs, 10);

    ans = static_cast<int>(x);

    if(y >= 5) {
        ans++;
    }

    cout << ans << endl;

}
