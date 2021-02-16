#include <iostream>
#include <vector>

using namespace std;

vector<int> visit;
vector<int> vec;
int N, M; // N은 범위 , M은 레벨
void backTracking(int l) { 

	
	//만약 모든 레벨까지 들어갔다면 
	if (l == M) {
		//출력
		for (int i = 0; i < M; i++) {
			//vec의 배열은 l의 따라 0~N까지 값이 배치 된다.
			cout << vec[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (!visit[i]) {
			visit[i] = 1;
			vec[l] = i;
			//재귀가 증가면서 vec의 인덱스도 카운트 된다.
			backTracking(l + 1);
			//출력이 끝나면 방문곳도 0으로 바꿔준다.
			visit[i] = 0;
		}
	}
}

int main() {

	cin >> N >> M;
	visit.resize(N+1, 0);
	vec.resize(N+1, 0);
	backTracking(0);

}