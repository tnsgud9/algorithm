#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<vector<int>> map;
vector<vector<int>> origin;

void input2() {
	cin >> n;
	map.resize(n+2);
	
	int a;
	for (int i = 0; i < n ; i++) {
		for (int j = i; j >= 0; j--) {
			cin >> a;
		
			map[j].push_back(a);
		}
	}
	for (int i = 1; i < n; i++) {
		for (int j = n-1; j >= i; j--) {
			cin >> a;
			map[j].push_back(a);
		}
	}
}

void input() {
	cin >> n;
	map.resize(n+1);
	origin.resize(n+1);
	for (int i = 0; i < n; i++)
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
	for (int i = 0; i < n-1; i++) {
		for (int j = 1; j <= i+1; j++) {
			if (j >= n) return;
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

	int max = *max_element(map[n - 1].begin(), map[n - 1].end());
	cout << max;
	return 0;
}