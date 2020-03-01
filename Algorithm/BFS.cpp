#include <iostream>
#include <vector>
#include <queue>

using namespace std;




vector<vector<int>> node;
queue<int> que; //node의 index 저장
int N;

void input() {
	cout << "입력 받을 노드의 개수 입력 >";
	cin >> N;

	node.resize(N);

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		node[a].push_back(b);
		node[b].push_back(a);
	}

}

void BFS(int start,int reach)
{
	
}

int main()
{
	input();

	int startNode;
	int findNode;

	cout << "시작 노드 >";
	cin >> startNode;

	cout << "찾을 노드 >";
	cin >> findNode;
	
	BFS(startNode,findNode);
	

}