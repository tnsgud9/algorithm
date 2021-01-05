#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<vector<int>> map;
	int n,m;
	cin >> n>>m;
	map.resize(n + 2, vector<int>(n + 2));

	int x = 1, y = 0;
	int cnt = n * n, N = n;
	int mX=0, mY=0;
	int sw = 1;
	
	while (cnt > 0)
	{
		for (int i = 0; i < n; i++) {
			y += sw;
			if (cnt == m)
			{
				mY = y; mX = x;
			}
			map[y][x] = cnt--;
		}
		n--;
		for (int i = 0; i < n; i++) {
			x += sw;
			if (cnt == m)
			{
				mY = y; mX = x;
			}
			map[y][x] = cnt--;
		}
		sw *= -1;
	}
	
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cout << map[i][j] << " ";
		}
		cout << "\n";
	}
	cout << mY << " " << mX;
}