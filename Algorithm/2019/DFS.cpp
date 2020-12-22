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
	//a : ���
	//b : ������� ����迭 (0���� �Է¹��� ��ŭ ~ )
	//node[a][b] : ���� ��� �ε���
	for (int i = 0; i < node[start].size(); i++) { 
		cout << node[start][i] << '\n';
		DFS(node[start][i]); //����Լ��� Ʈ���� ���������� ������
	}
}


int main() {
	freopen("input.txt", "r", stdin);

	input();


	cout << "1" << '\n'; //ó�������ϴ� ���� ����� ���� ������ DFS �Լ� ���� �־�� �Ѵ�

	DFS(1);
}