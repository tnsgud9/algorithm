#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<vector<int>> map;
vector<vector<int>> origin;

void input2() {
	cin >> N;
	map.resize(N+2);
	
	int a;
	for (int i = 0; i < N ; i++) {
		for (int j = i; j >= 0; j--) {
			cin >> a;
		
			map[j].push_back(a);
		}
	}
	for (int i = 1; i < N; i++) {
		for (int j = N-1; j >= i; j--) {
			cin >> a;
			map[j].push_back(a);
		}
	}
}

void input() {
	cin >> N;
	map.resize(N+1);
	origin.resize(N+1);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++) {
			int a;
			cin >> a;
			map[i].push_back(a);
			origin[i].push_back(a);
		}
	}
}

void dp() {
	for (int i = 0; i < N-1; i++) {
		for (int j = 1; j <= i+1; j++) {
			if (j >= N) return;
			if (map[i][j-1] + origin[i+1][j-1] > map[i + 1][j - 1]) {
				map[i + 1][j - 1] = origin[i+1][j-1] +  map[i][j-1];
			}
			if (map[i][j - 1] + map[i + 1][j] > map[i + 1][j]) {
				map[i+1][j] = origin[i + 1][j] + map[i][j-1];
			}

		}
	}
}
int main() {
	freopen("input.txt", "r", stdin);
	input();

	dp();

	int max = *max_element(map[N - 1].begin(), map[N - 1].end());
	cout << max;
	return 0;
}