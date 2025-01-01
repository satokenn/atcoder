#include <iostream>
#include <string>
#include <vector>
using namespace std;

string s = "";
string fact(int m) {
    if(m == 2) {
        s.insert(s.begin(), '2');
        return s;
    }
    if(m == 1) {
        s.insert(s.begin(), '1'); 
        return s;
    }
    if(m == 0) {
        s.insert(s.begin(), '0');
        return s;
    }


    int a = m % 3;
    int next = m / 3;

    s.insert(s.begin(), '0' + a);

    fact(next);

    return s;
}

int main() {
    int m;
    cin >> m;
    vector<int> ans, num;

    string prime = fact(m);


    for(char c : prime) {
        num.push_back(c - '0');
    }

    int power = 0, count = 0; 
    int j = num.size() - 1;

    while(true) {
        if(num[j] > 0) {
            ans.push_back(power);
            count++;
            num[j]--;
        }

        if(j == 0 && num[j] == 0) break;
        else if(num[j] == 0){
            j--;
            power++;
        }

    }

    cout << count << endl;
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;

}