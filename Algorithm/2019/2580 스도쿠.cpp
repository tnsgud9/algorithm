//백트레킹 문제
//해결 못함.

#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;


vector<vector<int>> map;
queue<pair<int, int>> que;
int cnt = 0;
bool checkPos(int y, int x) {
	vector<int> arr(10,0);
	for (int i = 1; i <= 9; i++) {
		arr[map[i][x]]++;
		arr[map[y][i]]++;
	}
	int tx, ty;
	switch (x)
	{
	case 1: case 2: case 3: tx = 1;
	case 4: case 5: case 6: tx = 4;
	case 7: case 8: case 9: tx = 7;
	}
	switch (y)
	{
	case 1: case 2: case 3: ty = 1;
	case 4: case 5: case 6: ty = 4;
	case 7: case 8: case 9: ty = 7;
	}
	for (int i = ty; i < ty + 3; i++) {
		for (int j = tx; j < tx + 3; j++) {
			arr[map[i][j]]++;
		}
	}

	for (int i = 1; i <= 9; i++) {
		if (arr[i] != 3) return false;
	}
	return true;
}

void sudoku(queue<pair<int, int>> que) {
	if (!que.empty()) {
		pair<int, int> pa = que.back();
		que.pop();

		for (int i = 1; i <= 9; i++) {
			map[pa.first][pa.second] = i;
			sudoku(que);
			if (checkPos(pa.first, pa.second)) {
				if (que.empty()) {
					cnt++;
					return;
				}
			}

		}

		//재귀
	}
}

int main() {
	freopen("input.txt", "r", stdin);
	//setup
	map.resize(10, vector<int>(10,0));
	int tmp;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cin >> tmp;
			if (tmp == 0) {
				que.push(make_pair(i, j));
			}
		} 
	}


	/*
	for(int i = 1; i<=9; i++){
	map [y][x] = i;
	//다음 스도쿠 위치로 이동한다.

	}
	
	*/
		sudoku(que);
		cout << cnt;
	//run

	//후보군 생성
	// map에서 값을 비교후 candMap라는 맵의 후보군에 저장한다.

	//int Xsel = i / 3;
	//int Ysel = j / 3;

}


