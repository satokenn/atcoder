#include <iostream>
#include <vector>
using namespace std;

int main() {
	int q;
	cin >> q;
	vector<long long>x(q + 5);
	// front = 先頭の位置, back = 末尾の位置
	int front = 0, back = 0;
	// 今まで追加してきた累積和の値
	long long tx = 0;

	for(int i = 0; i < q; i++) {
		int a, b;
		// a = クエリのタイプ
		cin >> a;
		if(a == 1) {
			cin >> b;
			x[back] = tx; back++;
			tx += b;
		}
		else if(a == 2){
			front++;
		}
		else if(a == 3) {
			cin >> b;
			b--;
			long long ans = x[front + b] - x[front];
			cout << ans << endl;
		}
	}
	return 0;
}