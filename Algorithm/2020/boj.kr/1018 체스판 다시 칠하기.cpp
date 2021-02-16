#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

vector<vector<char>> originMap;
int totalMin = 64;

void chessTileCheck(int m, int n) {
	int sWcnt = 0;
	int sBcnt = 0;

	vector<vector<char>> map = originMap;
	for (int i = m; i < m + 8; i++) {
		for (int j = n; j < n + 8; j++) {
			if ((i + j) % 2 == 0) {
				if (map[i][j] == 'B') sBcnt++;
				else sWcnt++;
			}
			else {
				if (map[i][j] == 'W') sBcnt++;
				else sWcnt++;
			}
		}
	}

	totalMin = totalMin < sWcnt ? totalMin : sWcnt;
	totalMin = totalMin < sBcnt ? totalMin : sBcnt;
}

int main() {
	int m, n;
	cin >> m >> n;
	originMap.resize(m, vector<char>(n));

	//input
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> originMap[i][j];
		}
	}

	//process
	for (int i = 0; i <= m-8; i++) {
		for (int j = 0; j <= n-8; j++) {
			//8x8 체스판으로 검으로 시작할때 백 타일로 시작했을때
			//두가지 경우의 수를 고려해서 코드를 구현한다.
			chessTileCheck(i, j);
		}
	}

	//output
	cout << totalMin;
}
