// 等間隔に並ぶ部分配列 a の中で，高さが同じ連続部分列の最長列を求めるという処理を全ての間隔と開始位置で試みている．
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> h(n);
	for(int i = 0; i < n; i++) cin >> h[i];
	
	int ans = 0;
	for(int w = 1; w <= n; w++) { // w : 等間隔の幅を表す
		for(int si = 0; si < w; ++si) { // si : 開始位置
			vector<int> a;
			for(int i = si; i < n; i += w) { 
				a.push_back(h[i]); // 今回，考えるビルの並びを部分配列 a の中に居れている.
			}

			int val = -1, len = 0;
			for(int x : a) {
				if (val == x) len++; // val と x(各ビルの高さ)が等しいときに連続部分列の長さlen を更新している．
				else val = x, len = 1; // val と x が等しくない時はval の値を変更し，部分列の最長列を1 に初期化している.
				ans = max(ans, len);
			}
		}
	}
	cout << ans << endl;
	return 0;
}

