#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
  // このコードは標準入力と標準出力を用いたサンプルコードです。
  // このコードは好きなように編集・削除してもらって構いません。

  string line, ans;
  cin >> line;

  sort(line.begin(), line.end());
  for(int i = 1; i <= 9; i++) {
    for(int j = 0; j < line.size(); j++) {
        cout << line[j];
      if(line[j] == i) {
        line.insert(0, to_string(i));
        cout << line << endl;
        return 0;
      }
    }
  }
  // cout << line << endl;
  return 0;
}