#include <iostream>
#include <vector>

using namespace std;
int N, M;
vector<int> vec;
vector<int> visit;

void nm4(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << vec[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = (cnt == 0) ? 1 : vec[cnt-1]; i <= N; i++) {
		vec[cnt] = i;
		nm4(cnt + 1);
	}

}


int main() {
	cin >> N >> M;
	vec.resize(N + 1, 0);
	visit.resize(N + 1, 0);
	nm4(0);

}