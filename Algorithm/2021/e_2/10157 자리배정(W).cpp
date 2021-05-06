#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> vec;
int cnt = 1;
int sw = -1;
int X, Y, K,x,y;

void snailArray() {
	while (cnt <= K)
	{
		for (int i = 1; i < Y; i++) {
			vec[y][x] = cnt;
			//if (cnt == K) return;
			cnt++;
			y += sw;
		}
		Y--;
		sw *= -1;
		for (int i = 1; i < X; i++) {
			vec[y][x] = cnt;
			//if (cnt == K) return;
			cnt++;
			x += sw;
		}
		X--;
	}

}

int main() {
	cin >> X >> Y >> K;
	vec.resize(Y+1, vector<int>(X+1,0));

	x = 1, y = Y;
	snailArray();

}