// �ٸ� ��α׿� �ִ� �ڵ带 ���� �ĺ����̴�. ���࿡ �ٽ� Ǯ� ������ �ִٸ� ������ ����ؼ� Ǯ���.

#include <iostream>
#include <vector>


using namespace std;
vector<vector<int>> vec;
int answer[2] = { 0 };

void dividedAndConquer(int y, int x, int size) {
	for (int i = y; i < y + size; i++) {
		for (int j = x; j < x + size; j++) {
			if (vec[y][x] != vec[i][j]) { //0 Ȥ�� 1 �̽� ��Ī�� �߻��Ҷ� 
				int s = size / 2;
				dividedAndConquer(y, x, s);
				dividedAndConquer(y + s, x, s);
				dividedAndConquer(y, x + s, s);
				dividedAndConquer(y + s, x + s, s);
				return;
			}
		}
	}
	answer[vec[y][x]]++;
}

int main() {
	int n;
	cin >> n;
	vec.resize(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> vec[i][j];
		}
	}


	dividedAndConquer(0, 0, n);
	cout << answer[0] << "\n" << answer[1];
}