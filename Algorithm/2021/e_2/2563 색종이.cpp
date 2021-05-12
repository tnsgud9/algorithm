#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> vec;
vector<pair<int, int>> list;

int xMax = -1, yMax = -1;
void paper(int x, int y) {
	for (int i = y; i < y + 10; i++) {
		for (int j = x; j < x + 10; j++) {
			vec[i][j] = 1;
		}
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (x + 10 > xMax) xMax = x + 10;
		if (y + 10 > yMax) yMax = y + 10;
		list.push_back(make_pair(x, y));
	}
	vec.resize(yMax + 1, vector<int>(xMax + 1, 0));
	for (int i = 0; i < n; i++) {
		paper(list[i].first, list[i].second);
	}
	int cnt = 0;
	for (int i = 0; i <= yMax; i++) {
		for (int j = 0; j <= xMax; j++) {
			if (vec[i][j]) cnt++;
		}
	}
	cout << cnt;
}