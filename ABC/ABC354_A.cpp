#include <iostream>
using namespace std;

int main() {
    int h;
    int sum = 0;
    int growth = 0;
    int count = 0;

    cin >> h;

    while(true) {
        if(growth == 0) {
            growth = 1;
        }
        else if(sum <= h) {
            growth *= 2;
        }
        else{
            break;
        }

        sum += growth;
        count++;
    }

    cout << count << endl;
    return 0;


}