#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
vector <vector<int>> vec_origin;
vector <vector<int>> origin;
void input() {
	cin >> N;
	vec_origin.resize(N);
	origin.resize(N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			int n;
			cin >> n;
			vec_origin[i].push_back(n);
			origin[i].push_back(n);
		}
	}
}

void dp() {
	for (int i = 1; i < N; i++) {
		for (int j = 1; j <= i; j++) {

			if (origin[i][j] < origin[i - 1][j - 1] + vec_origin[i][j])
				origin[i][j] = origin[i - 1][j - 1] + vec_origin[i][j];

			if (origin[i][j - 1] < origin[i - 1][j - 1] + vec_origin[i][j - 1])
				origin[i][j - 1] = origin[i - 1][j - 1] + vec_origin[i][j - 1];
		}
	}
}


int main() {
	input();
	dp();
	cout << *max_element(origin[N - 1].begin(), origin[N - 1].end());
	

}