//백준 채점 기준에서 틀림 수정필요
#include<iostream>

using namespace std;

int main() {
	int C;
	cin >> C;
	for (int loop = 0; loop < C; loop++) {
		int W, H, N;
		int cnt = 1;
		cin >> H >> W >> N;
		int i, j; // H , W
		for (i = 1; i <= W; i++) {
			for (j = 1; j <= H; j++) {
				if (N == cnt) break;
				else cnt++;
			}
			if (N == cnt) break;
		}
		printf("%d%02d", j, i);
	}

}