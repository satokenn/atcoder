#include <iostream>
using namespace std;

int main() {
    string x;
    cin >> x;
    for(int i = x.size() - 1; i >= 0; i--){
        if(x[i] == '0') {
            x[i] = '\0';
            continue;
        }
        else if(x[i] == '.') x[i] = '\0';
        
        break;
    }
    cout << x << endl;
    return 0;
}