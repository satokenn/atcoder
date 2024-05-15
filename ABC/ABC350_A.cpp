#include <iostream>
#include<string>
using namespace std;

int main() {
    string s, str_num;
    int num;
    cin >> s;

    
    for(int i = 3; i < 6; i++) {
        str_num += s[i];
    }


    num = stoi(str_num);

    for(int i = 349; i > 1; i--) {
        if(num == i && num != 316) {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";

    return 0;
        
}