#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> map;
int N;
int cnt = 0;


// 현재 배열을 넘겨주면서 처리하는 방법
// 재귀 함수 이후 처리가 없어서 깔끔해 보일 수 있으나
// 파라미터 값으로 vec가 들어가기 떄문에 메모리 크기가 커진다.
void n_queen(vector<vector<int>> vec,int y, int x) {

	for (int i = 0; y-i > 0; i++) {
			if (vec[y - i][x] == 1) return;
			if(x - i > 0)
				if (vec[y - i][x - i] == 1)return;
			if(x + i <=N)
				if (vec[y - i][x + i] == 1) return;
	}
	if (y == N) {
		cnt++;
		return;
	}
	vec[y][x] = 1;
	for(int i = 1;i<=N;i++)
		n_queen(vec, y + 1, i);
}


// 백트래킹시 나올떄 0을 박고 나오는 방법.
// 메모리 관리 면에서 이게 더 효율적이다.
void n_queen_fix( int y, int x) {

	for (int i = 0; y - i > 0; i++) {
		if (map[y - i][x] == 1) return;
		if (x - i > 0)
			if (map[y - i][x - i] == 1)return;
		if (x + i <= N)
			if (map[y - i][x + i] == 1) return;
	}
	if (y == N) {
		cnt++;
		return;
	}
	map[y][x] = 1;
	for (int i = 1; i <= N; i++)
		n_queen_fix(y + 1, i);
	map[y][x] = 0;
}

int main() {
	cin >> N;
	map.resize(N+1, vector<int>(N+2,0));
	for (int i = 1; i <= N; i++) {
		//map.resize(N + 1, vector<int>(N + 2, 0));
		//n_queen(map,1, i);
		n_queen_fix(1, i);
	}
	cout << cnt;
}
