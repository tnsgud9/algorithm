#include <iostream>
#include <vector>

using namespace std;
int N, M;
vector<int> vec;
vector<int> visit;

void nm2(int num, int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << vec[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = num; i <= N; i++) {
		if (!visit[i]) {
			visit[i] = 1;
			vec[cnt] = i;
			nm2(i+1,cnt + 1);
			visit[i] = 0;

			
		}
	}
}



int main() {
	cin >> N >> M;
	visit.resize(N + 1, 0);
	vec.resize(N + 1, 0);
	nm2(1,0);

}

