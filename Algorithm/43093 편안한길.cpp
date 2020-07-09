#include <iostream>
#include <vector>

using namespace std;
int N;

vector<vector<int>> vec;
vector<vector<int>> origin;

void input() {
	cin >> N;
	origin.resize(N+1, vector<int>(N+1,0));

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> origin[i][j];
		}
	}
	vec = origin;
}

void dp() {
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (origin[i][j] == 0) { //0일때
				vec[i][j] = vec[i - 1][j] > vec[i][j - 1] ? vec[i - 1][j] : vec[i][j - 1];
			}
			else //1일 때
			{
				vec[i][j] = vec[i - 1][j] > vec[i][j - 1] ? vec[i - 1][j]+1 : vec[i][j - 1]+1;
			}

		}
	}
}


int main() {
	freopen("input.txt", "r", stdin);
	input();
	dp();

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cout << vec[i][j];
		}
		cout << "\n";
	}
}