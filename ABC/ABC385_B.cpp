#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int h, w, x, y, sum = 0;
	string t;
	cin >> h >> w >> x >> y;
	x -= 1, y -= 1;
	vector<vector<char>> s(h, vector<char>(w));
	for(int i = 0; i < h; i++) {
		for(int j = 0; j < w; j++){
			cin >> s[i][j];
		}
	}
	cin >> t;

	for(char c : t){
		if(c == 'L' && s[x][y - 1] != '#') {
			y--;
		}
		else if(c == 'D' && s[x + 1][y] != '#') {
			x++;
		}
		else if(c == 'U' && s[x - 1][y] != '#') {
			x--;
		}
		else if(c == 'R' && s[x][y + 1] != '#') {
			y++;
		}
		if(s[x][y] == '@') {
			s[x][y] = '.';
			sum++;
		}
	}
	x += 1, y += 1;	
	cout << x << " " << y << " " << sum << endl;

	return 0;
}
