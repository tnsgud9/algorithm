#include <iostream>
#include <vector>
#include <queue>

using namespace std;




vector<vector<int>> node;
queue<int> que; //node�� index ����
int N;

void input() {
	cout << "�Է� ���� ����� ���� �Է� >";
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

	cout << "���� ��� >";
	cin >> startNode;

	cout << "ã�� ��� >";
	cin >> findNode;
	
	BFS(startNode,findNode);
	

}