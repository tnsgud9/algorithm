#include <iostream>
#include <vector>


using namespace std;

vector<vector<int>> node;

void input() {
	int N;
	cin >> N;

	node.resize(N + 2);

	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		node[a].push_back(b);
	}

}

void DFS(int start) {

	//node[a][b] <- value
	//a : 노드
	//b : 도착노드 저장배열 (0부터 입력받은 만큼 ~ )
	//node[a][b] : 도착 노드 인덱스
	for (int i = 0; i < node[start].size(); i++) { 
		cout << node[start][i] << '\n';
		DFS(node[start][i]); //재귀함수로 트리의 마지막까지 내려감
	}
}


int main() {
	freopen("input.txt", "r", stdin);

	input();


	cout << "1" << '\n'; //처음시작하는 노드는 출력이 없기 떄문에 DFS 함수 위에 넣어야 한다

	DFS(1);
}