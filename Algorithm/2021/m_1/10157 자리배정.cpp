#include <iostream>

using namespace std;
int N, M,K;
int cnt = 1;


int n, m;

int x=1, y = 1;
int sw = 1;
int arr[10][10];
int main() {

	cin >> N >> M >> K;
	n = M; m = N;
	for (int i = 0; i < n - 1; i++) {
		arr[y][x] = cnt++;
		x += sw;
	}
	n--;

	while (cnt < K)
	{
		for (int i = 0; i < m-1; i++) {
			arr[y][x] = cnt;
			if (cnt == K) break;
			cnt++;
			y += sw;

		}
		m--;
		sw *= -1;
		for (int i = 0; i < n ; i++) {
			arr[y][x] = cnt;
			if (cnt == K) break;
			cnt++;
			x += sw;
		}
		n--;
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			printf("%4d", arr[i][j]);
		}
		cout << "\n";
	}
	cout << n << " " << m;
}