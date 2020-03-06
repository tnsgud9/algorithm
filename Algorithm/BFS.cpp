#include <iostream>
#include <vector>
#include <queue>

using namespace std;




vector<vector<int>> node;
queue<int> que; //node의 index 저장
vector<int> visit;
int N;

void input() {
	cout << "입력 받을 노드의 개수 입력 >";
	cin >> N;

	node.resize(N + 2);
	visit.resize(N + 2);

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		node[a].push_back(b);
	}

}

void BFS(int start)
{
	que.push(start);
	visit[start] = true;

	while (!que.empty())
	{
		int x = que.front();
		que.pop();

		cout << x << '\n';
		for (int i = 0; i < node[x].size(); i++) {
			int y = node[x][i];
			if (!visit[y]) { que.push(y); visit[y] = true; }
		}
	}
}

void BFS1(int start) {
	
	// !!! que에 넣은 노드를 기준으로 탐색이 진행된다. !!!

	// 시작 번지 부터 que에 넣어야 한다.
	que.push(start);
	visit[start] = true;
	// 이 구간은 시작노드에서 que로 보내야 하기 때문에 한번만 실행된다.


	while (!que.empty()) {
		//맨앞에 queue를 가져온다.
		int queindex = que.front();
		que.pop();

		//node[a][b] <- value
		//a : 노드
		//b : 도착노드 저장배열 (0부터 입력받은 만큼 ~ )
		//node[a][b] : 도착 노드 인덱스
		for (int i = 0; i < node[queindex].size(); i++) {
			int visitIndex = node[queindex][i]; // 도착노드 인덱스 저장 node[a][b]
			if(!visit[visitIndex]) {  //한번도 해당 노드에 방문하지 않았을 경우
				que.push(visitIndex); //que에 방문 안한 노드 인덱스를 넣는다
				visit[visitIndex] = true; //방문 예정인 노드의 인덱스를 방문확인 array에 참을 넣는다.??

			}
		}

	}
}

int main()
{
	freopen("input.txt","r", stdin);
	input();

	BFS1(1);
	

}