#include <iostream>
#include <iomanip>
#include <limits>
#include <vector>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    vector<double> mid(m + 1), count(m + 1);
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        count[a[i]]++;
        mid[a[i]] += b[i];
    }

    for(int i = 1; i < m + 1; i++) {
        mid[i] /= count[i];
        cout << fixed << setprecision(6);

        cout << mid[i] << endl;
    }
}