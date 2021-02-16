#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int N, M;

vector<int> arr, vec, visit;

void nm5(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[vec[i]] << " ";

		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (!visit[i]) {
			visit[i] = 1;
			vec[cnt] = i;
			nm5(cnt + 1);
			visit[i] = 0;
		}
	}
}

int main() {
	cin >> N >> M;
	vec.resize(N+1, 0);
	visit.resize(N+1, 0);
	arr.resize(N + 1, 0);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(),arr.end());
	nm5(0);
}

