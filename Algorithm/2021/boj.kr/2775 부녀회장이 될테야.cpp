#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> vec(15,vector<int>(15)); // int vec[15][15];
// 2차원 배열

int main() {
	for (int i = 0; i < 15; i++) {
		vec[i][1] = 1;
		vec[0][i] = i;
	}
	for (int i = 1; i < 15; i++) {
		for (int j = 2; j < 15; j++) {
			vec[i][j] = vec[i - 1][j] + vec[i][j - 1];
		}
	}
	/*배열 확인용*/
	/*
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			printf("%5d ",vec[i][j]);
		}
		printf("\n");
	}
	*/

	int T;
	int k, n;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		cout << vec[k][n] << "\n";
	}
}