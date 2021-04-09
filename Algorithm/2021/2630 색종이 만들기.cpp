// 다른 블로그에 있는 코드를 따라 쳐본것이다. 만약에 다시 풀어볼 의향이 있다면 스스로 고민해서 풀어보자.

#include <iostream>
#include <vector>


using namespace std;
vector<vector<int>> vec;
int answer[2] = { 0 };

void dividedAndConquer(int y, int x, int size) {
	for (int i = y; i < y + size; i++) {
		for (int j = x; j < x + size; j++) {
			if (vec[y][x] != vec[i][j]) { //0 혹은 1 미스 매칭이 발생할때 
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