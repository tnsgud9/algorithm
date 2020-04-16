#include <iostream>
#include <vector>

using namespace std;
int N;
vector <vector<int>> vec;
void input() {
	cin >> N;
	vec.resize(N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			int n;
			cin >> n;
			vec[i].push_back(n);
		}
	}
}

void dp() {
	for (int i = 1; i < N; i++) {
		for (int j = 1; j <= i; j++) {
			if(vec[i][j - 1] < vec[i][j - 1] + vec[i - 1][j - 1])
			vec[i][j - 1] += vec[i-1][j-1];

			if (vec[i][j - 1] < vec[i][j - 1] + vec[i][j])
			vec[i][j] += vec[i - 1][j];
		}
	}
}


int main() {
	input();
	dp();

}