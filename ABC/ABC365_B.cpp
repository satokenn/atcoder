#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int first = 0, second = 0;
    int firstSuf = 0, secondSuf = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(first < a[i]) {
            second = first;
            secondSuf = firstSuf;
            first = a[i];
            firstSuf = i + 1;
        }
        else if(second < a[i] && a[i] < first) {
            second = a[i];
            secondSuf = i + 1;
        }
    }
    cout << secondSuf << endl;

}