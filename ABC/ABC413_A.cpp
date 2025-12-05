#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, num, sum = 0;
    cin >> n >> num;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        sum += a;
    }
    if(sum <= num) cout << "Yes\n";
    else cout << "No\n";
}