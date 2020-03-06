#include <iostream>
#include <vector>
#include <queue>

using namespace std;




vector<vector<int>> node;
queue<int> que; //node�� index ����
vector<int> visit;
int N;

void input() {
	cout << "�Է� ���� ����� ���� �Է� >";
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
	
	// !!! que�� ���� ��带 �������� Ž���� ����ȴ�. !!!

	// ���� ���� ���� que�� �־�� �Ѵ�.
	que.push(start);
	visit[start] = true;
	// �� ������ ���۳�忡�� que�� ������ �ϱ� ������ �ѹ��� ����ȴ�.


	while (!que.empty()) {
		//�Ǿտ� queue�� �����´�.
		int queindex = que.front();
		que.pop();

		//node[a][b] <- value
		//a : ���
		//b : ������� ����迭 (0���� �Է¹��� ��ŭ ~ )
		//node[a][b] : ���� ��� �ε���
		for (int i = 0; i < node[queindex].size(); i++) {
			int visitIndex = node[queindex][i]; // ������� �ε��� ���� node[a][b]
			if(!visit[visitIndex]) {  //�ѹ��� �ش� ��忡 �湮���� �ʾ��� ���
				que.push(visitIndex); //que�� �湮 ���� ��� �ε����� �ִ´�
				visit[visitIndex] = true; //�湮 ������ ����� �ε����� �湮Ȯ�� array�� ���� �ִ´�.??

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