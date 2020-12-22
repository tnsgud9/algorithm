#include <iostream>
#include <vector>
#include<algorithm>
#define R 0
#define G 1
#define B 2
using namespace std;

vector<vector<int>> map;
int main() {
	int N;
	cin >> N;
	map.resize(N, vector<int>(3));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> map[i][j];
		}

	}

	for (int i = 1; i < N; i++) {
		map[i][R] = min(map[i - 1][G], map[i - 1][B]) + map[i][R];
		map[i][G] = min(map[i - 1][R], map[i - 1][B]) + map[i][G];
		map[i][B] = min(map[i - 1][R], map[i - 1][G]) + map[i][B];
	}

	cout << min(min(map[N - 1][R], map[N - 1][G]), map[N - 1][B]);

}