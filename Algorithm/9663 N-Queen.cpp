#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> map;
int N;
int cnt = 0;


// ���� �迭�� �Ѱ��ָ鼭 ó���ϴ� ���
// ��� �Լ� ���� ó���� ��� ����� ���� �� ������
// �Ķ���� ������ vec�� ���� ������ �޸� ũ�Ⱑ Ŀ����.
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


// ��Ʈ��ŷ�� ���Ë� 0�� �ڰ� ������ ���.
// �޸� ���� �鿡�� �̰� �� ȿ�����̴�.
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
